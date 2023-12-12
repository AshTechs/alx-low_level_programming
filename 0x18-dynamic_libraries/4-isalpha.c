#include "main.h"
/**
 * _isalpha - Alphabets
 * @c: X'ter to b chkd
 * Return: 1 or 2
 */
int _isalpha(int c)
{
if ((c >= 65 && c <= 97) || (c >= 97 && c <= 122))
{
return (1);
}
return (0);
}
