#include "main.h"
/**
 * _isalpha - Entry point
 * @c: single letter input
 * Description: '0x02. C - Functions, nested loops'
 * Return:1 if int c is lowercase, 0 if otherwise
 */
int _isalpha(int c)
{
	if (c >= 'a' && c <= 'z' || c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
