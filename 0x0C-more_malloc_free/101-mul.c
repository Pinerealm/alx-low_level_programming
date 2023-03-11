#include <stdio.h>
#include <stdlib.h>

void print_error(void);
int _putchar(char c);
int _isdigit(char c);
int check_args(char *num1, char *num2);

void rev_string(char *s);
char *add(char *n1, char *n2, char *r);
int string_len(char *s);
char *_strcpy(char *dest, char *src);

int _atoi(char *s);

/**
 * main - Entry point
 * @argc: argument count
 * @argv: argument vector
 *
 * Description: prints the result of multiplying two base 10 numbers
 * stored as strings
 * Return: always 0 (on success)
 */
int main(int argc, char **argv)
{
	int idx, idx2, buff_idx, carry, tmp_idx, res, len2;
	int total_buff, place, j;
	char *res_buff, *tmp_buff, *interim_buff, *num1, *num2;

	idx = idx2 = buff_idx = res = place = j = 0;
	if (argc != 3)
		print_error();
	num1 = argv[1];
	num2 = argv[2];
	/* Exit with code 98 if arguments are not valid */
	/* Changes strings with all zeros to 0 */
	check_args(num1, num2);
	if (_atoi(num1) == 0 || _atoi(num2) == 0)
	{
		_putchar('0');
		_putchar('\n');
		return (0);
	}

	/* find the length of the first number */
	idx = string_len(num1);
	len2 = idx2 = string_len(num2);
	total_buff = idx + idx2 + 1;

	/* allocate memory for the result */
	res_buff = malloc(sizeof(char) * total_buff);
	tmp_buff = malloc(sizeof(char) * total_buff);
	interim_buff = malloc(sizeof(char) * total_buff);
	if (tmp_buff == NULL || res_buff == NULL || interim_buff == NULL)
		print_error();

	interim_buff[0] = '0';
	interim_buff[1] = '\0';
	/* multiply the numbers */
	while (idx > 0)
	{
		idx--;
		carry = 0;
		tmp_idx = 0;
		j = place;
		while (j > 0)
		{
			tmp_buff[tmp_idx++] = '0';
			j--;
		}

		while (idx2 > 0)
		{
			res = (num1[idx] - '0') * (num2[--idx2] - '0');
			res += carry;
			tmp_buff[tmp_idx++] = res % 10 + '0';
			carry = res / 10;
			tmp_buff[tmp_idx] = '\0';
		}
		if (carry > 0)
			tmp_buff[tmp_idx++] = carry + '0';

		tmp_buff[tmp_idx] = '\0';
		rev_string(tmp_buff);
		add(tmp_buff, interim_buff, res_buff);
		_strcpy(interim_buff, res_buff);

		idx2 = len2;
		place++;
	}
	while (res_buff[buff_idx])
		_putchar(res_buff[buff_idx++]);
	_putchar('\n');

	free(res_buff);
	free(tmp_buff);
	free(interim_buff);
	return (0);
}

/**
 * print_error - prints error message
 *
 * Return: void
 */
void print_error(void)
{
	char *error_msg = "Error";
	unsigned int idx = 0;

	while (error_msg[idx])
	{
		_putchar(error_msg[idx]);
		idx++;
	}
	_putchar('\n');
	exit(98);
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

/**
 * check_args - check if the arguments are valid digits
 * @str1: first argument
 * @str2: second argument
 *
 * Description: changes strings with all zeros to 0
 * Return: 0 if valid, otherwise exit with code 98
 */
int check_args(char *str1, char *str2)
{
	unsigned int idx = 0, zeros = 0;

	while (str1[idx])
	{
		if (str1[idx] == '0')
			zeros++;
		if (!_isdigit(str1[idx]))
		{
			print_error();
			exit(98);
		}
		idx++;
	}
	if (zeros == idx)
	{
		str1[0] = '0';
		str1[1] = '\0';
	}

	idx = zeros = 0;
	while (str2[idx])
	{
		if (str2[idx] == '0')
			zeros++;
		if (!_isdigit(str2[idx]))
		{
			print_error();
			exit(98);
		}
		idx++;
	}
	if (zeros == idx)
	{
		str2[0] = '0';
		str2[1] = '\0';
	}

	return (0);
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

/**
 * add - adds two numbers as strings
 * @n1: first number
 * @n2: second number
 * @r: buffer to store the result
 *
 * Return: pointer to the result
 */
char *add(char *n1, char *n2, char *r)
{
	int idx1 = 0, idx2 = 0, res_idx = 0, tmp, carry = 0;

	/* find the length of n1 and n2 */
	idx1 = string_len(n1);
	idx2 = string_len(n2);

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
		r[res_idx++] = (tmp % 10) + '0';
	}
	if (carry > 0)
		r[res_idx++] = carry + '0';
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
 * _strcpy - copies the string pointed to by src to the buffer, dest
 * @dest: location to copy string to
 * @src: string to copy
 *
 * Return: pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	int idx = 0;

	while (src[idx] != '\0')
	{
		dest[idx] = src[idx];
		idx++;
	}
	dest[idx] = '\0';

	return (dest);
}

/**
 * _atoi - convert a string to an integer
 * @s: string to convert
 *
 * Return: integer value of the string
 */
int _atoi(char *s)
{
	int res, idx, tmp;

	res = idx = 0;
	while (s[idx] != '\0')
	{
		tmp = s[idx++] - '0';
		res = res * 10 + tmp;
	}
	return (res);
}
