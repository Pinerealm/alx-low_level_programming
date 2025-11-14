/**
 * factorial - finds the factorial of a number
 * @n: number
 *
 * Return: factorial of n
 */
int factorial(int n)
{
	int res;

	if (n < 0)
		return (-1);
	if (n == 0 || n == 1)
		return (1);

	res = n * factorial(n - 1);
	return (res);
}
