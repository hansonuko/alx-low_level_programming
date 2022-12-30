#include "main.h"
#include <stdio.h>

/**
 * _isupper - prints letters in uppercase
 * @c: the letter to look out for
 *
 * Return: 1 if c is uppercase, otherwise 0
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
