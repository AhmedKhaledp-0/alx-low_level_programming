#include"main.h"
#include <ctype.h>

/**
 * string_toupper - main function
 * @s: char
 * Return: s
 */
char *string_toupper(char *s)
{
	int i;

	i = 0;
	while (s[i] != '\0')
	{
		s[i] = toupper((unsigned char)s[i]);
		i++;
	}
	return (s);
}
