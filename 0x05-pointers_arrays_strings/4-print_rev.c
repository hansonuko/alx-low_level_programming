#include "main.h"

/**
 * print_rev - print strings in reverse
 * @s: the char to be printed
 *
 * Return: 0 is success
 */

void print_rev(char *s)
{
	int i, j, len;

	i = 0;

	while (s[n] != '\0')
	{
		i++;
	}

	len = i;
	for (j = len - 1; j >= 0; j--)
	{
		_putchar(s[j]);
	}
	_puchar('\n');
}
