#ifndef DOG_H
#define DOG_H

/**
 * struct dog - dog's info
 * @n: Name of the dog
 * @a: Age of the dog
 * @o: Owner of the dog
 */

struct dog
{
	char *n, *o;
	float a;
}

void init_dog(struct dog *d, char *n, char *o, float a);
void print_dog(struct dog *d);
dog_t *new_dog(char *n, float a, char *o);
void free_dog(dog_t *d);
char *_strcpy(char *d, char *s);
int _strlen(char *s);

#endif
