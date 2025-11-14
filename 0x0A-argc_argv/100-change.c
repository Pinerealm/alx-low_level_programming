#include <stdio.h>
#include <stdlib.h>

/**
 * main - entry point
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Description: prints the minimum number of coins
 * to make change for an amount of money
 * Return: 0 on success
 */
int main(int argc, char *argv[])
{
	int num, coins, idx, coin_vals[] = {25, 10, 5, 2, 1};

	coins = idx = 0;
	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	num = atoi(argv[1]);
	if (num < 0)
	{
		printf("0\n");
		return (0);
	}
	while (num > 0)
	{
		if (num >= coin_vals[idx])
		{
			coins += num / coin_vals[idx];
			num %= coin_vals[idx];
		}
		else
			idx++;
	}
	printf("%d\n", coins);
	return (0);
}
