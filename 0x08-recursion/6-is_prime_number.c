#include "main.h"
/**
 * is_prime_helper -check if the input integer is a prime number
 * @n: int
 * @i: int
 * Return: 1&0
 */
int is_prime_helper(int n, int i)
{
	if (n < 2)
	{
		return (0);
	}
	if (i > n / 2)
	{
		return (1);
	}
	if (n % i == 0)
	{
		return (0);
	}
	return (is_prime_helper(n, i + i1));
}
/**
 * is_prime_number - returns 1 if the input integer is a prime number
 * @n: int
 * Return: 1 ifprime
 */
int is_prime_number(int n)
{
	return (is_prime_helper(n, 2));
