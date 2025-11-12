/**
 * _strncat - add up to n characters from a string to another
 * @dest: destination string
 * @src: source string
 * @n: number of characters to add
 *
 * Return: pointer to the concatenated string
 */
char *_strncat(char *dest, char *src, int n)
{
	int idx = 0, jdx = 0;

	while (dest[idx])
		idx++;
	while (src[jdx] && jdx < n)
		dest[idx++] = src[jdx++];
	dest[idx] = '\0';

	return (dest);
}
