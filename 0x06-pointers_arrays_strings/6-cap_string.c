/**
 * cap_string - capitalizes all words of a string
 * @s: string to modify
 *
 * Return: pointer to the resulting string
 */
char *cap_string(char *s)
{
	int idx = 0, sep_idx;
	int new_word = 1;
	char separators[] = " \t\n,;.!?\"(){}";

	while (s[idx])
	{
		if (new_word && s[idx] >= 'a' && s[idx] <= 'z')
		{
			s[idx] -= 32;
			new_word = 0;
		}
		else
		{
			new_word = 0;
			for (sep_idx = 0; separators[sep_idx]; sep_idx++)
			{
				if (s[idx] == separators[sep_idx])
				{
					new_word = 1;
					break;
				}
			}
		}
		idx++;
	}
	return (s);
}
