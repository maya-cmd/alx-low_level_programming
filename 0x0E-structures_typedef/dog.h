#ifndef DOG_H
#define DOG_H

/**
 *struct dog -Information about a  dog
 *@name: The first variable
 *@age: The second variable
 *@owner: The third variable
 *
 * Description: Gives information about the dog's name, age and owner
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

/**
*dog_t - struct dog's type definition
*/
typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
char *_strcpy(char *dest, char *src);
int _strlen(char *s);

#endif
