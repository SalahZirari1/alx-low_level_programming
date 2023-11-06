#include "dog.h"
#include <stddlib.h>

/**
 * print_dog - prints da dawg
 * @d: dawg
 */

void print_dog(struct dog *d)
{
	if (d == NULL)
		return;
	if (d->name == NULL)
		d->name = "(nil)";
	if (d->owner == NULL)
		d->owner = "(nil)";

	printf("Name: %s", d->name);

	if (d->age == NULL)
		printf("Age: (nil)");
	
	printf("Age: %.6f", d->age);
	printf("Owner: %s", d->owner);
}
