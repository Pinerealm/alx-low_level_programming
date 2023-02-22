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
	int idx1 = 0, idx2 = 0, res_idx = 0, tmp, carry = 0;

	/* find the length of n1 and n2 */
	idx1 = string_len(n1);
	idx2 = string_len(n2);
	/* check if the result can fit in r */
	if ((idx1 + 1) >= size_r || (idx2 + 1) >= size_r)
	{
		return (0);
	}
	/* add the numbers */
	idx1--;
	idx2--;
	while (idx1 >= 0 || idx2 >= 0)
	{
		tmp = 0;
		if (idx1 >= 0)
		{
			tmp += n1[idx1] - '0';
			idx1--;
		}
		if (idx2 >= 0)
		{
			tmp += n2[idx2] - '0';
			idx2--;
		}
		tmp += carry;
		carry = tmp / 10;
		r[res_idx] = (tmp % 10) + '0';
		res_idx++;
	}
	if (carry > 0)
	{
		r[res_idx] = carry + '0';
		res_idx++;
	}
	r[res_idx] = '\0';
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

	while (s[idx] != '\0')
		idx++;
	return (idx);
}

/**
 * rev_string - reverses a string
 * @s: pointer to a string
 */
void rev_string(char *s)
{
	int i = 0, idx = 0;
	char temp;

	while (s[idx] != '\0')
	{
		idx++;
	}
	while (i < idx)
	{
		temp = s[i];
		s[i] = s[--idx];
		s[idx] = temp;
		i++;
	}
}
