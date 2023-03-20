#ifndef dog_h
#define dog_h
#include <stdio.h>
#include <stdlib.h>

/**
 *struct dog - a dog with a name, age,and owner.
 *@name: name of dog
 *@age: age of dog
 *@owner: owner of dog
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

#endif
