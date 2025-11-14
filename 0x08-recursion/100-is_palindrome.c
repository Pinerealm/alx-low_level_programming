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
	int len = _strlen_recursion(s);

	if (len == 0)
		return (1);

	return (cmp_letters(s, 0, len - 1));
}

/**
 * cmp_letters - compares letters at the beginning and end of strings
 * @s: pointer to string
 * @start: starting index
 * @end: ending index
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

/**
 * _strlen_recursion - get string length by recursion
 * @s: pointer to string
 *
 * Return: string length
 */

int _strlen_recursion(char *s)
{
	if (!*s)
	{
		return (0);
	}
	return (1 + _strlen_recursion(++s));
}
