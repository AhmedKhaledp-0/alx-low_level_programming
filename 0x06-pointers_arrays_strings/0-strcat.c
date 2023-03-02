#include "main.h"

/**
 * char *_strcat - main function
 * @*dest: first pointer
 * @*src: second pointer
 * RETURN: dest_star
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
