/**
 * leet - encodes a string into 1337
 * @s: string to modify
 *
 * Description: Replaces letters with numbers. a/A = 4, e/E = 3, o/O = 0,
 * t/T = 7, l/L = 1
 * Return: pointer to the resulting string
 */
char *leet(char *s)
{
	int idx = 0, lidx;
	char letters[] = "aeotlAEOTL";
	char numbers[] = "4307143071";

	while (s[idx])
	{
		for (lidx = 0; letters[lidx]; lidx++)
		{
			if (s[idx] == letters[lidx])
			{
				s[idx] = numbers[lidx];
				break;
			}
		}
		idx++;
	}
	return (s);
}
