#include "main.h"

/**
 * _strlen - the length of the string to check
 * @s: string to be checked
 *
 * Return: Always 0 is success
 */

int _strlen(char *s)
{
	int a = 0;

	for (; *s++;)
	a++;
	return (a);
}
