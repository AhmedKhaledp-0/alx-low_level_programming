#include "main.h"

/**
 * findroot - square root of a number.
 * @a: int
 * @b: int
 * Return: square root of a number.
 */
int findroot(int a, int b)
{
	if (b * b == a)
		return (b);
	else if (b * b > a)
		return (-1);
	return (findroot(a, b + 1));
}
/**
 * _sqrt_recursion - returns the natural square root of n
 * @n: Number Integer
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _sqrt_recursion(int n)
{
	return (findroot(n, 1));
}
