#include "main.h"
#include <stdlib.h>

/**
 * argstostr - concatenates all the arguments of a program with newline
 * between arguments
 *
 * @ac: argument count
 * @av: array of pointers to program arguments
 *
 * Return: pointer to concatenated string
 */

char *argstostr(int ac, char **av)
{
	char *cat_str;
	int cnt = 0, i, j, k;

	if (!ac)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		if (!av[i])
			return (NULL);
		for (j = 0; av[i][j] != '\0'; j++)
			cnt++;
		cnt++;
	}

	cat_str = malloc((cnt + 1) * sizeof(**av));

	if (!cat_str)
	{
		free(cat_str);
		return (NULL);
	}

	for (i = j = k = 0; k < cnt; j++, k++)
	{
		if (av[i][j] == '\0')
		{
			cat_str[k] = '\n';
			i++;
			k++;
			j = 0;
		}
		if (k < cnt - 1)
			cat_str[k] = av[i][j];
	}
	cat_str[k] = '\0';

	return (cat_str);
}
