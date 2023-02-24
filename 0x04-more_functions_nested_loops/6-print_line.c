#include "main.h"

/**
 * print_line -  draws a straight line in the terminal
 * @n: intigar num
 * Return: Void
 */
void print_line(int n)
{
	int i;

	if (n == 0)
	{
		_putchar('\n');
	}
	else if (n > 0)
	{
		for (1 = 0; i <= n; i++)
		{
			_putchar('_');
		}
	}
	else
	{
		_putchar('\n');
	}
}
