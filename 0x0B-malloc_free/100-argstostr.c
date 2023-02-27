#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * argstostr - concatenates all the arguments of a program
 * @ac: argument count
 * @av: arguments
 *
 * Return: pointer to the concatenated string or NULL if it fails
 */
char *argstostr(int ac, char **av)
{
	char *arg_str, *tmp_arg;
	int i = 0, idx = 0, len = 0;

	if (ac == 0 || av == NULL)
		return (NULL);
	while (i < ac)
	{
		tmp_arg = av[i];
		while (*tmp_arg)
		{
			len++;
			tmp_arg++;
		}
		i++;
	}
	arg_str = malloc(sizeof(char) * (len + ac + 1));
	if (!arg_str)
		return (NULL);

	i = 0;
	while (i < ac)
	{
		tmp_arg = av[i];
		while (*tmp_arg)
		{
			arg_str[idx++] = *tmp_arg;
			tmp_arg++;
		}
		arg_str[idx++] = '\n';
		i++;
	}
	arg_str[idx] = '\0';

	return (arg_str);
}
