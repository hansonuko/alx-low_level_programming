#include <studio.h>
/**
 * main - A C program that prints the size of various types on the computer it is compiled and run on.
 * Return: 0 (Success)
 */
int main(void)
{
char a;
int b;
long c;
long long d;
float f;
printf("Size of a char: %lu byte(s)\n", (unsigned long)sizeof(a));
printf("Size of an int: %lu byte(s)\n", (unsigned long)sizeof(b));
printf("Size of a long: %lu byte(s)\n", (unsigned long)sizeof(c));
printf("Size of a long long: %lu byte(s)\n", (unsigned long)sizeof(d));
printf("Size of a float: %lu byte(s)\n", (unsigned long)sizeof(f));
return (0);
}