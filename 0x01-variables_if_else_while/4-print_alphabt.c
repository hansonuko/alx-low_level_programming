#include <stdio.h>

/**
 * main - print all alphabets in lowercase except q and e
 *
 * Return: 0
 */

int main(void)
{
	char lettter;

	for (letter = 'a'; letter <= 'z'; letter++)
		putchar(letter);
	{
		for (letter != 'e' && letter != 'q')
			putchar(letter);
	}
	putchar('\n');
	return (0);
}
