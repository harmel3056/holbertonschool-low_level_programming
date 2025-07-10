#ifndef DOG_H
#define DOG_H

/**
 * struct dog - contains details of the dog
 * @name: pointer to string (name of the dog)
 * @age: age is non-integer (age of the dog)
 * @owner: pointer to string (name of the dog's owner)
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

#endif
