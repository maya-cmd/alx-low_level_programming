#include <stdlib.h>
#include "dog.h"
/**
 *new_dog - Function creates a new dog
 *@name: The name of the dog
 *@age: Age of the new dog
 *@owner: Owner of the new dog
 *
 *Return: Pointer to the new dog and NULL if not successful
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;

	int length1, length2;

	length1 = string_length(name);
	length2 = string_length(owner);

	dog = malloc(sizeof(dog_t));
	if (dog == NULL)
		return (NULL);

	dog->name = malloc(sizeof(char) * (length1 + 1));
	if (dog->name == NULL)
	{
		free(dog);
		return (NULL);
	}
	dog->owner = malloc(sizeof(char) * (length2 + 1));
	if (dog->owner == NULL)
	{
		free(dog);
		free(dog->name);
		return (NULL);
	}
	_strcpy(dog->name, name);
	dog->age = age;
	_strcpy(dog->owner, owner);


	return (dog);
}

/**
 * string_length -  Returns the length of a string
 *@s : Input
 * Return: len.
 */

int string_length(char *s)
{
	int j;

	j = 0;

	while (s[j] != '\0')
	{
		j++;
	}

	return (j);
}

/**
 * *_strcpy -  copies the string pointed to by src
 * @dest : copy to
 * @src : copy from
 *
 * Return: string
 */
char *_strcpy(char *dest, char *src)
{
	int i = 0;
	int x;

	while (src[i] != '\0')
	{
		i++;
	}
	for (x = 0; x <= i; x++)
	{
		dest[x] = src[x];
	}
	return (dest);
}

