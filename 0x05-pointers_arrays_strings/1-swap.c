#include "main.h"

/**
 * swap_int - swaps the value of integer a and b
 * @a: first integer
 * @b: second int
 * Return: always 0 is success
 */

void swap_int(int *a, int *b)
{
	int s;

	s = *a;
	*a = *b;
	*b = s;
}
