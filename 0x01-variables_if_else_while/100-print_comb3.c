#include <stdio.h>
/**
 * main - Print all possible combinations
 * Return: 0
 */
int main(void)
{
int i = '0';
int j = '0';
while (i <= '9')
{
while (j <= '9')
{
if (!(i > j) || i == j)
{
putchar(i);
putchar(j);
if (i == '9' && j == '9')
{
putchar('\n');
}
else
{
putchar(',');
putchar(' ');
}
}
j++;
}
j = '0';
i++;
}
i = '0';
return (0);
}
