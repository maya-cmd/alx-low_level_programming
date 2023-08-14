#include <stdlib.h>
#include "dog.h"
/**
 *free_dog - Function frees dogs
 *@d: The struct to free
 *
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


