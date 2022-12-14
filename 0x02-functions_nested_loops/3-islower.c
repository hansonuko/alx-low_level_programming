#include "main.h"

/**
 * _islower - Write a function that prints in lowercase.
 * @c: is the char to be checked
 * Return: 1 if c is lowercase, otherwise 0.
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
