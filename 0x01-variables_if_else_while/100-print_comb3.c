#include <stdio.h>

/**
 * main - prints all possible different combinations of two digits
 * Return: 0
 */

int main(void)
{
	int c, i;

	for (c = 48; c <= 56; c++)
	{
		for (i = 49; i <= 57; i++)
		{
			if (i > c)
			{
				putchar(c);
				putchar(i);


				if (c != 56 || i = 57)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
