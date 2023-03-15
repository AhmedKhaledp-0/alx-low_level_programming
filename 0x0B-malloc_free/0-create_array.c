#include "main.h"
#include <stdio.h>

/**
 * create_array -  creates an array of chars, and initializes it
 * @size: unsigned int
 * @c: char
 * Return: NULL if size = 0 or ointer to the array
 */
char *create_array(unsigned int size, char c)
{
char *array = malloc(size);

	if (size == 0 || array == 0)
		return (NULL);
	while (size--)
		array[size] = c;
	return (array);
}
