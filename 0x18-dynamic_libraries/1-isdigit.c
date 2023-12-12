#include "main.h"

/**
 * _isdigit - Chk for a digit
 * @c: The char to be chkd
 * Return:1 or 0
 */

int _isdigit(int c)

{
if (c >= 48 && c <= 57)
{
return (1);
}
return (0);
}
