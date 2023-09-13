#include <stdio.h>
/**
 * main - Print the first
 * Return: 0
 */
int main(void)
{
	int u = 0;
	long v = 1, w = 2;

	while (u < 50)
	{
	if (u == 0)
	printf("%ld", v);
	else if (u == 1)
	printf(", %ld", w);
	else
	{
	w += v;
	v = w - v;
	printf(", %ld", w);
	}
	u++;
	}
	printf("\n");
	return (0);
}
