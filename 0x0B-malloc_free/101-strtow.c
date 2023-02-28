#include "main.h"
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
	char **words_array = NULL, tmp[100], *word;
	int idx = 0, word_len, word_count = 0;

	if (str == NULL || *str == '\0')
		return (NULL);
	word_count = get_word_count(str);
	words_array = malloc(sizeof(char *) * (word_count + 1));
	if (words_array == NULL)
		return (NULL);

	while (*str)
	{
		if (*str == ' ')
			str++;
		else
		{
			word_len = 0;
			while (*str != ' ' && *str != '\0')
			{
				tmp[word_len++] = *str;
				str++;
			}
			tmp[word_len] = '\0';
			word = malloc(sizeof(char) * (word_len + 1));
			if (word == NULL)
			{
				while (idx >= 0)
					free(words_array[idx--]);
				free(words_array);
				return (NULL);
			}
			word = _strcpy(word, tmp);
			words_array[idx++] = word;
		}
	}
	if (idx == 0)
	{
		free(words_array);
		return (NULL);
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
	int count = 0;

	while (*str)
	{
		if (*str == ' ')
			str++;
		else
		{
			while (*str != ' ' && *str != '\0')
				str++;
			count++;
			str++;
		}
	}
	return (count);
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
