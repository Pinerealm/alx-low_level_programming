#include "main.h"
int _isdigit(char c);

/**
 * _atoi - convert a string to an integer
 * @s: string to convert
 *
 * Return: integer value of the string
 */
int _atoi(char *s)
{
	int res, idx, num_idx, num_len, sign, tmp;

	res = idx = num_len = sign = 0;
	while (s[idx] != '\0')
	{
		if (s[idx] == '-')
		{
			sign++;
			idx++;
			continue;
		}
		if (_isdigit(s[idx]))
		{
			num_idx = idx;
			while (_isdigit(s[idx]))
			{
				tmp = s[idx] - '0';
				if (sign % 2)
					tmp = -tmp;
				res = res * 10 + tmp;
				idx++;
			}
			num_len = idx - num_idx;
		}
		if (num_len > 0)
			break;
		idx++;
	}
	return (res);
}

/**
 * _isdigit - check if a character is a digit
 * @c: character to check
 *
 * Return: 1 if digit, 0 otherwise
 */
int _isdigit(char c)
{
	return (c >= '0' && c <= '9');
}
