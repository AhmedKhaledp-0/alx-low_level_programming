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
	char *cat, *chr;
	int arg, size;

	if (!ac || !av)
		return (NULL);

	for (arg = 0, size = 1; arg < ac; ++arg, ++size)
	{
		for (chr = av[arg]; *chr; ++chr, ++size)
			;
	}

	cat = (char *) malloc(sizeof(char) * size);

	if (!cat)
		return (NULL);

	for (arg = 0, size = 0; arg < ac; ++arg, ++size)
	{
		for (chr = av[arg]; *chr; ++chr, ++size)
			cat[size] = *chr;
		cat[size] = '\n';
	}

	cat[size] = '\0';

	return (cat);
}
