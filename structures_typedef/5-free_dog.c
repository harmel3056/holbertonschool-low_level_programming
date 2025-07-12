#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * free_dog - releases memory allocated for dog_t
 * @d: memory to be released/freed
 *
 * Description: Frees memory allocated by dog_t
 * Return: void
 */

void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
