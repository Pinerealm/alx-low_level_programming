/**
 * rev_string - reverses a string
 * @s: pointer to a string
 */
void rev_string(char *s)
{
	int start = 0, end = 0;
	char temp;

	while (s[end])
	{
		end++;
	}
	while (start < end)
	{
		temp = s[start];
		s[start] = s[--end];
		s[end] = temp;
		start++;
	}
}
