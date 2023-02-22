#include "main.h"
/**
 * _islower - Entry point
 * Description: '0x02. C - Functions, nested loops'
 * Return:1 if int c is lowercase, 0 if otherwise 
 */
int _islower(int c)
{
	if (c <= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
