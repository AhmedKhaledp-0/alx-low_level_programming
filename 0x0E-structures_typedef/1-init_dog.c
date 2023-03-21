#include "dog.h"
#include <stdlib.h>
/**
 * init_dog - Initialize a variable of type 'struct dog'.
 * @d: type struct dog.
 * @name: char type stirng.
 * @age: type float.
 * @owner: char type string.
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
