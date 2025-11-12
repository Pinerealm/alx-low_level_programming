/**
 * rot13 - encodes a string using rot13
 * @s: string to modify
 *
 * Return: pointer to the resulting string
 */
char *rot13(char *s)
{
	int idx = 0;

	while (s[idx])
	{
		if ((s[idx] >= 'A' && s[idx] <= 'M')
			|| (s[idx] >= 'a' && s[idx] <= 'm'))
			s[idx] += 13;
		else if ((s[idx] >= 'N' && s[idx] <= 'Z')
			|| (s[idx] >= 'n' && s[idx] <= 'z'))
			s[idx] -= 13;

		idx++;
	}
	return (s);
}
