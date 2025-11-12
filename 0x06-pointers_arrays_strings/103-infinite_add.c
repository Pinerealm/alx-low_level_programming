#include "main.h"
void rev_string(char *s);
int string_len(char *s);

/**
 * infinite_add - adds two numbers
 * @n1: first number
 * @n2: second number
 * @r: buffer to store the result
 * @size_r: buffer size
 *
 * Return: pointer to the result
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int len1 = string_len(n1);
	int len2 = string_len(n2);
	int carry = 0, sum, i = 0;

	while (len1 > 0 || len2 > 0 || carry)
	{
		int digit1 = (len1 > 0) ? n1[--len1] - '0' : 0;
		int digit2 = (len2 > 0) ? n2[--len2] - '0' : 0;

		sum = digit1 + digit2 + carry;
		carry = sum / 10;

		if (i >= size_r - 1)
			return (0);

		r[i++] = (sum % 10) + '0';
	}

	r[i] = '\0';
	rev_string(r);

	return (r);
}

/**
 * string_len - returns the length of a string
 * @s: pointer to a string
 *
 * Return: length of the string
 */
int string_len(char *s)
{
	int idx = 0;

	while (s[idx])
		idx++;
	return (idx);
}

/**
 * rev_string - reverses a string
 * @s: pointer to a string
 */
void rev_string(char *s)
{
	int len = string_len(s), i;
	char tmp;

	for (i = 0; i < len / 2; i++)
	{
		tmp = s[i];
		s[i] = s[len - i - 1];
		s[len - i - 1] = tmp;
	}
}
