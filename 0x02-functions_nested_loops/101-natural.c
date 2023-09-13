#include <studio.h>
/**
 * main - Print the sum
 * Return: 0a
 */
int main(void)

{
	int a, b = 0;

	while (a < 1024)
	{
	if ((a % 3 == 0) || (a % 5 == 0))
	{
	b += a;
	}
	a++;
	}
	printf("%d\n", b);
	return (0);
}
