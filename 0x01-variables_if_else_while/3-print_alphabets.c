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

	for (b <= 'z')
	{
		b++;
		putchar(b);
	}
	for (d <= 'Z')

	{
		d++;
		putchar(d);
	}

	putchar('\n');
	return (0);
}
