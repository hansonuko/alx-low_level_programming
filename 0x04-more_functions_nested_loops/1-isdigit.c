#include "main.h"

/**
 * _isdigit - prints and prints if it is a digit
 * @c: char to check
 *
 * Return: 1 if the char is digit, otherwise 0
 */

int _isdigit(int c)
{
	char c;

	c = '0';
	_putchar("%c: %d\n", c, _isdigit(c));
	c = 'a';
	_putchar("%c: %d\n", c, _isdigit(c));

	return (0);
}
