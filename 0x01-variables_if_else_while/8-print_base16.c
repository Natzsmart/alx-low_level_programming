#include <stdio.h>

/**
 * main - prints out all the numbers of base 16 in lowercase
 * Return: 0
 */

int main(void)
{
	char b;

	for (b = 0; b < 10; b++)
		putchar(b);
	for (b = 'a'; b <= 'f'; b++)
		putchar(b);
	putchar('\n');
	return (0);
}
