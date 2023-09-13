#include "main.h"
/**
 * _abs - Absolute integer
 * @n: The num
 * Return: Absolte or 0
 */
int _abs(int n)
{
if (n < 0)
{
int abs_val;
abs_val = n * -1;
return (abs_val);
}
return (n);
}
