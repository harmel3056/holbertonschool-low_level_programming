#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *copy_string(char *str);

/**
 * new_dog - creates a new dog
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 *
 * Description: stores copies of new dog details
 * Return: pointer to new dog details
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *d;
	char *n, *o;

	n = copy_string(name);
	if (!n)
	{
		return (NULL);
	}

	o = copy_string(owner);
	if (!o)
	{
		free(n);
		return (NULL);
	}

	d = malloc(sizeof(dog_t));
	if (!d)
	{
		free(n);
		free(o);
		return (NULL);
	}


	d->name = n;
	d->age = age;
	d->owner = o;

	return (d);
}


char *copy_string(char *str)
{
	int size;
	char *copy;

	if (!str)
		return (NULL);

	size = strlen(str) + 1;
	copy = malloc(size);

		if (!copy)
			return (NULL);

	strcpy(copy, str);
	return (copy);
}
