/**
 * _memcpy - copies the first n bytes from memory area src to memory area dest
 *
 * @dest: destination memory area
 * @src: source memory area
 * @n: no of bytes to copy
 *
 * Return: pointer dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
