#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * argstostr - function that concatenates all the arguments of your program
 * @ac: int
 * @av: char
 * Return: NULL if ac == 0 or av == NULL
 */
char *argstostr(int ac, char **av)
{
	int flag, c, w;

	flag = 0;
	w = 0;

	for (c = 0; s[c] != '\0'; c++)
	{
		if (s[c] == ' ')
			flag = 0;
		else if (flag == 0)
		{
flag = 1;
			w++;
		}
	}

	return (w);
}
