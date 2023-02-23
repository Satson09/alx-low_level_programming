#include <stdio.h>

/**
 * main - program that prints the lowercase alphabet in reverse
 *
 *
 * Return: always 0 (success)
 */
int main(void)
{
	char c;

	for (c = 'z'; c >= 'a'; --c)
	{
		putchar (c);
	}
	putchar ('\n');

	return (0);
}
