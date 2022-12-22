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
	int i, c, tmp;

	c = n - 1;

	for (i = 0; i < n / 2; i++)
	{
		tmp = a[i];
		a[i] = a[c];
		a[c--] = temp;
	}
}
