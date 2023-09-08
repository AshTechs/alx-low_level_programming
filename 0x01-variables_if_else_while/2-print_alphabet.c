#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Prints the alphabet in lowercase
 * Return: 0
 */
int main(void)
{
	int lowerCase = 'a';
while (lowerCase <= 'z')
	{
		putchar(lowerCase);
		lowerCase += 1;
	}
	putchar('\n');
return (0);
}
