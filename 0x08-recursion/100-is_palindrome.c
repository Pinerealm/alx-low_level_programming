#include "main.h"

int cmp_letters(char *s, int n);
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

	return (cmp_letters(s, len - 1));
}

/**
 * cmp_letters - compares letters at the beginning and end of strings
 * @s: pointer to string
 * @n: number added to current string position
 *
 * Return: 1 if compared letters are the same, otherwise 0
 */

int cmp_letters(char *s, int n)
{
	if (n < 1)
	{
		return (1);
	}

	if (*s == *(s + n))
	{
		return (cmp_letters(s + 1, n - 2));
	}
	return (0);
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
