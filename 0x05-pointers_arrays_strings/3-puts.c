#include "main.h"

/**
 * _puts - writes a string followed by new line
 * @str: string character to be checked
 *
 * Return: Always 0 is success
 */

void _puts(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		_puts(str[i]);
		i++
	}
	_puts('\n');
	return (0);
}
