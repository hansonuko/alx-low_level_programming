#include "main.h"

/**
 * reverse_array - function that changes all lowercase letters
 * of a string to uppercase.
 * @a: the array
 * @n: the integer
 *
 * Return: the array in reverse
 */

void reverse_array(int *a, int n)
{
	int i, c;

	for (i = 0; (i < (n - 1) / 2); i++)
	{
		c = a[i];
		a[i] = a[n - 1 - i];
		a[n - 1 - i] = c;
	}
}
