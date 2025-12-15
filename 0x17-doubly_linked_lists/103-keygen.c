#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * main - Generates a valid key for the crackme5 executable.
 * @argc: The number of arguments passed to the program.
 * @argv: An array of pointers to the arguments.
 *
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	int i, len;
	char *user, key[7] = {0};
	char *c = "A-CHRDw87lNS0E9B2TibgpnMVys5XzvtOGJcYLU+4mjW6fxqZeF3Qa1rPhdKIouk";
	int s = 0, p = 1, ss = 0, max, v;

	if (argc != 2)
	{
		printf("Usage: %s username\n", argv[0]);
		return (1);
	}

	user = argv[1];
	len = strlen(user);
	key[0] = c[(len ^ 0x3b) & 0x3f];
	max = user[0];

	for (i = 0; i < len; i++)
	{
		s += user[i];
		p *= user[i];
		ss += user[i] * user[i];
		if (user[i] > max)
			max = user[i];
	}

	key[1] = c[(s ^ 0x4f) & 0x3f];
	key[2] = c[(p ^ 0x55) & 0x3f];

	srand(max ^ 0xe);
	v = rand();
	key[3] = c[v & 0x3f];

	key[4] = c[(ss ^ 0xef) & 0x3f];

	for (i = 0; i < user[0]; i++)
		v = rand();
	key[5] = c[(v ^ 0xe5) & 0x3f];

	printf("%s\n", key);
	return (0);
}
