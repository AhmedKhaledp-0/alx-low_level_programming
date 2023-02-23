#include "main.h"
#include <stdio.h>

/**
 * _isupper - check uppercase
 * @c: char input
 * Return: If uppercase 1& 0 if otherwice
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
