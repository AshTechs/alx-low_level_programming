#include <stdio.h>

void first(void)__attribute__((constructor));

/**
 * first - Fisrt prints a sentence b4 fxn is excuted
 */

void first(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
