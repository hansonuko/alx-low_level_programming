#include "main.h"

/**
 * _isdigit - prints and prints if it is a digit
 * @c: char to check
 *
 * Return: 1 if the char is digit, otherwise 0
 */

int _isdigit(int c)
{
	if (c <= '0' && c >= '9')
		return (1);
	else
		return (0);
}
