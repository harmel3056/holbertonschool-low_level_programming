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

typedef struct dog dog_t;

dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

#endif
