#include "main.h"
/**
 * print_last_digit - a function that prints the last digit of a number
 * @dig: number's last digit result
 * Return: value of the last digit
 */
int print_last_digit(int dig)
{
	int i;
	i = (dig % 10);
	
	if (i < 0)
	{
		i = (-1 * i);
	}
	_putchar(i + '0');
	return (i);
}
