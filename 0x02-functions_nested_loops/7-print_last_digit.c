#include "main.h"

/**
 * print_last_digit - print last digit of a number
 * @int: the number to be checked
 * Return: value of the digit
 */

int print_last_digit(int)
{
	int last_digit(10);

	if (last_digit < 0)
		last_digit *= -1;

	_putchar(last_digit + '0');

	return (last_digit);
}
