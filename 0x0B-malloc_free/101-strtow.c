#include <stdlib.h>

int get_word_count(char *str);
char *_strcpy(char *dest, char *src);

/**
 * strtow - splits a string into words
 * @str: string to split
 *
 * Return: pointer to an array of strings
 */
char **strtow(char *str)
{
	char **words_array = NULL;
	int idx = 0, word_count = 0;

	if (str == NULL || *str == '\0')
		return (NULL);

	word_count = get_word_count(str);
	if (word_count == 0)
		return (NULL);

	words_array = malloc(sizeof(char *) * (word_count + 1));
	if (!words_array)
		return (NULL);

	while (*str)
	{
		while (*str == ' ')
			str++;

		if (*str)
		{
			int j, len = 0;

			while (str[len] && str[len] != ' ')
				len++;

			words_array[idx] = malloc(len + 1);
			if (!words_array[idx])
			{
				while (idx > 0)
					free(words_array[--idx]);
				free(words_array);
				return (NULL);
			}

			for (j = 0; j < len; j++)
				words_array[idx][j] = str[j];
			words_array[idx][j] = '\0';

			str += len;
			idx++;
		}
	}
	words_array[idx] = NULL;

	return (words_array);
}

/**
 * get_word_count - counts the number of words in a string
 * @str: string of words
 *
 * Return: number of words
 */
int get_word_count(char *str)
{
	int count = 0, in_word = 0;

	while (*str)
	{
		if (*str != ' ')
		{
			if (!in_word)
			{
				in_word = 1;
				count++;
			}
		}
		else
			in_word = 0;

		str++;
	}
	return (count);
}
