/**
 * _strcmp - compare two strings
 * @s1: first string
 * @s2: second string
 *
 * Return: 0 if equal, a negative no. if s1 < s2, otherwise a positive no.
 */
int _strcmp(char *s1, char *s2)
{
	int idx = 0;

	while (s1[idx] && s1[idx] == s2[idx])
		idx++;

	return (s1[idx] - s2[idx]);
}
