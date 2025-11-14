int cmp_letters(char *s, int start, int end);
int _strlen_recursion(char *s);

/**
 * is_palindrome - checks if a string is a palindrome
 * @s: pointer to string
 *
 * Return: 1 if a palindrome, otherwise 0
 */

int is_palindrome(char *s)
{
	int len = 0;
	char *start = s;

	while (*start++)
		len++;

	if (len == 0)
		return (1);

	return (cmp_letters(s, 0, len - 1));
}

/**
 * cmp_letters - compares letters at the beginning and end of strings
 * @s: pointer to string
 * @n: number added to current string position
 *
 * Return: 1 if compared letters are the same, otherwise 0
 */

int cmp_letters(char *s, int start, int end)
{
	if (start >= end)
		return (1);

	if (s[start] != s[end])
		return (0);

	return (cmp_letters(s, start + 1, end - 1));
}
