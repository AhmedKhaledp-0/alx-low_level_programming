#include "dog.h"
#include <stdlib.h>
/**
 * new_dog - Create a new dog.
 * @name: char type string.
 * @age: type float.
 * @owner: char type string.
 * Return: the object created.
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	struct dog *newDog;
	int nameLong, ownerLong, i;
	char *Name, *Owner;

	newDog = malloc(sizeof(struct dog));
	if (newDog == NULL)
		return (NULL);

	for (nameLong = 0; name[nameLong] != '\0'; nameLong++)
		;
	for (ownerLong = 0; owner[ownerLong] != '\0'; ownerLong++)
		;

	Name = malloc(sizeof(char) * nameLong + 1);
	if (Name == NULL)
	{
		free(newDog);
		return (NULL);
	}
	Owner = malloc(sizeof(char) * ownerLong + 1);
	if (Owner == NULL)
	{
		free(Name);
		free(newDog);
		return (NULL);
	}

	for (i = 0; i <= nameLong; i++)
		Name[i] = name[i];

	for (i = 0; i <= ownerLong; i++)
		Owner[i] = owner[i];

	newDog->name = Name;
	newDog->age = age;
	newDog->owner = Owner;

	return (newDog);
}
