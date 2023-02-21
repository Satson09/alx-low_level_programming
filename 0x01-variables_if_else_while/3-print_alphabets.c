#include <stdio.h>

/**
 * main - prints alpha in lower and upper case
 *
 * Return: always 0 (success)
 */
int main(void)
{
	char b

	for (b = 'a'; b < = 'z'; b++)
		putchar(b);

	for (b = 'A'; b < = 'Z'; b++)
		putchar(b);

	putchar('\n');

	return (0);
}
