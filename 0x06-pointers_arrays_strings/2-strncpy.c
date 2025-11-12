/**
 * _strncpy - copy a string
 * @dest: destination string
 * @src: source string
 * @n: number of characters to copy
 *
 * Return: pointer to the copied string
 */
char *_strncpy(char *dest, char *src, int n)
{
	int idx = 0;

	while (src[idx] && idx < n)
	{
		dest[idx] = src[idx];
		idx++;
	}
	while (idx < n)
	{
		dest[idx] = '\0';
		idx++;
	}

	return (dest);
}
