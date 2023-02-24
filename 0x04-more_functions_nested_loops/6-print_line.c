#include "main.h"

/**
 * print_line -  draws a straight line in the terminal
 * @n: intigar num
 * Return: Void
 */
void print_line(int n)
{
	if (n == 0)
	{
		_putchar('\n');
	}
	else if (n > 0)
	{
		 _putchar('_');
	}
	else
	{
		  _putchar('\n');
	}
}
