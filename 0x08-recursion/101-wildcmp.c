#include "main.h"

/**
 * wildcmp -nction that compares two strings
 * @s1: char
 * @s2: cahr
 * Return: alot
 */
int wildcmp(char *s1, char *s2)
{
	if (*s2 == '*')
	{
		if (*(s2 + 1) == '\0')
		{
			return (1);
		}
		if (*s1 == '\0')
		{
			return (0);
		}
		return (wildcmp(s1, s2 + 1) || wildcmp(s1 + 1, s2));
	}
	if (*s1 == '\0')
	{
		return (*s2 == '\0' || *s2 == '*');
	}
	if (*s1 == *s2 || *s2 == '?')
	{
		return (wildcmp(s1 + 1, s2 + 1));
	}
	return (0);
}
