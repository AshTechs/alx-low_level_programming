#ifndef DOG_H
#define DOG_H

/**
 * struct dog - dog's info
 * @name: Name of the dog
 * @age: Age of the dog
 * @owner: Owner of the dog
 */

struct dog
{
	char *name, *owner;
	float age;
}

void init_dog(struct dog *d, char *name, char *owner, float age);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
char *_strcpy(char *d, char *s);
int _strlen(char *s);
typedef struct dog dog_t;

#endif
