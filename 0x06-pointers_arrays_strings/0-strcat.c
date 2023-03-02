#include "main.h"

/**
 * _strcat - main function
 * @dest: first pointer
 * @src: second pointer
 * Return:dest_star
 */
char *_strcat(char *dest, char *src)
{
	char *dest_start = dest;

	while (*dest != '\0')
	{
		dest++;
	}
	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return (dest_start);
}
