#include <stdio.h>
#include <ctype.h>

/**
 * print_buffer - prints a buffer
 * @b: pointer to the buffer
 * @size: size of the buffer
 */
void print_buffer(char *b, int size)
{
	int idx = 0, i, size2 = size, buff_pos = 0;

	if (size <= 0)
	{
		printf("\n");
		return;
	}
	while (idx < size)
	{
		printf("%08x:", idx);
		i = 0;
		while (i < 10 && size2 > 0)
		{
			if (i % 2 == 0)
				printf(" ");
			printf("%02x", b[idx]);
			idx++;
			i++;
			size2--;
		}
		while (i < 10)
		{
			if (i % 2 == 0)
				printf(" ");
			printf("  ");
			i++;
		}
		printf(" ");
		while (buff_pos < idx)
		{
			if (isprint(b[buff_pos]))
				printf("%c", b[buff_pos]);
			else
				printf(".");
			buff_pos++;
		}
		printf("\n");
	}
}
