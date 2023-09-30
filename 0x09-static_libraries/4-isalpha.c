#include "main.h"

/**
 * _isalpha - Chks for alphabets
 * @c: Char to be chkd
 * Return: 1 if c = alphabet, 0 if not
 */

int _isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
