#include"main.h"

/**
 * reverse_array - main function
 * @a: int
 * @n: int
 * Return: always 0
 */
void reverse_array(int *a, int n)
{
	int temp;

	for (int i = 0; i < n / 2; i++)
	{
		temp = a[i];
		a[i] = a[n - i - 1];
		a[n - i - 1] = temp;
	}
}
