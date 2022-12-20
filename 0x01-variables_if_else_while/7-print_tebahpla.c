#include <stdio.h>

/**
 * main - print lowercase alphabets in reverse
 *
 * Return: 0
 */

int main(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter--)
		putchar(letter);
	putchar('\n');

	return (0);
}
