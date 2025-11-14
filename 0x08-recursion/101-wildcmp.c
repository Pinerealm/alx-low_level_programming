#include "main.h"

/**
 * wildcmp - compare two strings
 * @s1: string 1
 * @s2: string 2
 *
 * Return: 1, if strings are identical, 0 otherwise
 */
int wildcmp(char *s1, char *s2)
{
	/* Both strings exhausted */
	if (*s1 == '\0' && *s2 == '\0')
		return (1);

	/* Skip consecutive '*' in s2 */
	if (*s2 == '*')
	{
		if (*(s2 + 1) == '*')
			return (wildcmp(s1, s2 + 1));

		/* Wildcard at the end of s2 matches remaining s1 */
		if (*(s2 + 1) == '\0')
			return (1);

		/* Try to match the rest of s2 */
		return (wildcmp(s1, s2 + 1)
			|| (*s1 != '\0' && wildcmp(s1 + 1, s2)));
	}

	/* Characters match, advance both */
	if (*s1 == *s2 && *s1 != '\0')
		return (wildcmp(s1 + 1, s2 + 1));

	return (0);
}
