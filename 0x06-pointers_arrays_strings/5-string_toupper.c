/**
 * string_toupper - changes all lowercase letters of a string to uppercase
 * @s: string to change
 *
 * Return: pointer to the resulting string
 */
char *string_toupper(char *s)
{
	int idx = 0;

	while (s[idx])
	{
		if (s[idx] >= 'a' && s[idx] <= 'z')
			s[idx] -= 32;
		idx++;
	}

	return (s);
}
