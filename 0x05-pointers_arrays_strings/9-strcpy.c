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

	while (src[idx])
	{
		dest[idx] = src[idx];
		idx++;
	}
	dest[idx] = '\0';

	return (dest);
}
