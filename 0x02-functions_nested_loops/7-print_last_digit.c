#include "main.h"

/**
 * print_last_digit - prints last digit
 * @x: the integer to look out for
 *
 * Return: las digit
 */

int print_last_digit(int x)
{
	int y;

	if (x < 0)
	{
		y = -1 * (x % 10);
		_putchar(y + '0');
		return (y);
	}
	else
		y = x % 10;
	_putchar(y + 10);
	return (y);
}
