#include "dog.h"
#include <stdio.h>

/**
 * init_dog - initialises a variable of the type struct dog
 * @d: initialising pointer
 * @name: pointer to name variable (char)
 * @age: pointer to age variable (float)
 * @owner: pointer to owner variable (char)
 *
 * Description: initialises a variable of the type struct dog
 * Return: void
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		return;

	d->name = name;
	d->age = age;
	d->owner = owner;
}
