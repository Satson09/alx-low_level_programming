#include <stdio.h>

/**
 * main - prints alpha in lower and upper case
 *
 * Return: always 0 (success)
 */
int main(void)
{
	char b = 'a';
	char d = 'A';

	while (b <= 'z')
	{
		putchar(b);
		b++;
	}
	while (d <= 'Z')

	{
		putchar(d);
		d++;
	}

	putchar('\n');
	return (0);
}
