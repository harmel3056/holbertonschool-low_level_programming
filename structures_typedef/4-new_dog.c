#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

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

/**
 * copy_string - helper function to copy string
 * @str: string to copy
 *
 * Description: takes string size and uses that to make copies
 * Return: copy of the string
 */

char *copy_string(char *str)
{
	int size = 0, i;
	char *copy;

	if (!str)
		return (NULL);

	while (str[size] != '\0')
		size++;

	copy = malloc(size + 1);

	if (!copy)
		return (NULL);

	for (i = 0; i < size; i++)
		copy[i] = str[i];

	copy[i] = '\0';
	return (copy);
}
