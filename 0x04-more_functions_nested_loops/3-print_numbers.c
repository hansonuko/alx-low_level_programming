#include "main.h"

/**
 * print_numbers - prints numbers 0 to 10
 *
 * Return: void
 */

void print_numbers(void)
{
	char c;

	for (c = 0; c < 10; c++)
	{
	_putchar(c + '0');
	}

	_putchar('\n');
}
