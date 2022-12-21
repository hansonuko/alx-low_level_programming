#include "main.h"

/**
 * print_rev - print strings in reverse
 * @s: the char to be printed
 *
 * Return: 0 is success
 */

void print_rev(char *s)
{
	int i, n;

	n = 0;
	while (s[n] != '\0')
		n++;

	for (i = n - 1; i >= 0; i--)
	{
		_putchar(s[i]);
	}
	_puchar('\n');
}
