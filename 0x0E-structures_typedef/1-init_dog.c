#include "dog.h"
#include <stdlib.h>
#include<stdio.h>
/**
 *init_dog - Function initializes a variable of type struct dog
 *@d:struct dog pointer that is being initialized
 *@name: How old the dog is
 *@age: Name of the dog
 *@owner: Who does it belong to
 *
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
	{
		d = malloc(sizeof(struct dog));
		if (d == NULL)
		{
			printf("Error\n");
			return;
		}
	}

	d->name = name;
	d->age = age;
	d->owner = owner;
}

