/**
 * _pow_recursion - calculates x raised to power y
 *
 * @x: base number
 * @y: exponent
 *
 * Return: result
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);

	return (x * _pow_recursion(x, y - 1));
}
