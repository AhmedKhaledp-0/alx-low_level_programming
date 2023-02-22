#include "main.h"
#include <stdio.h>
/**
 * print_sign - Entry point
 * @c: single letter input
 * Description: '0x02. C - Functions, nested loops'
 * Return:+ or - or 0
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar ('+');
		return (1);
	}
	else if (n < 0)
	{
		_putchar ('-');
		return (-1);
	}
	else
	{
		_putchar ('0');
		return (0);
	}
}
