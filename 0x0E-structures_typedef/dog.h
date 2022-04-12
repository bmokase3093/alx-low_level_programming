#ifndef DOG_H
#define DOG_H

/**
 * struct dog - structure of a dog
 * @name: name of the dog
 * @age: age of dog
 * @owner: owner of dog
 *
 * Description: User-defined dog structure
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
#endif
