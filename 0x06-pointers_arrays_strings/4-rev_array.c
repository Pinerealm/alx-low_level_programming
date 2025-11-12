/**
 * reverse_array - reverses the contents of an array of integers
 * @a: array to reverse
 * @n: number of elements in the array
 */
void reverse_array(int *a, int n)
{
	int left = 0, right = n - 1, tmp;

	while (left < right)
	{
		tmp = a[left];
		a[left] = a[right];
		a[right] = tmp;
		left++;
		right--;
	}
}
