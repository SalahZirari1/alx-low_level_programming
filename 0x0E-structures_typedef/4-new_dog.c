#include "dog.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * new_dog - another dawg
 * @name: dawg name
 * @age: dawg age
 * @owner: dawg owner
 *
 * Return: NULL or pointer
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_dog;

	if (new_dog == NULL)
		return (NULL);

	new_dog->name = strdup(name);
	new_dog->owner = strdup(owner);
	new_dog->age = age;

	return new_dog;
}
