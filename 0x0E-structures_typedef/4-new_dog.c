#include "dog.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

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

	new_dog = (dog_t *)malloc(sizeof(dog_t));

	if (new_dog == NULL)
		return (NULL);

	new_dog->name = strdup(name);
	new_dog->owner = strdup(owner);
	new_dog->age = age;

	return new_dog;
}
