#include <stdio.h>

/**
 * main - program that prints the alphabet in lowercase except q and e
 *
 * initializing variables to data type char
 *
 * Return: always 0 (success)
 */
int main(void)
{
	int c;

		for (c = 'a'; c <= 'z'; c++)

		if (c != 'q' && c != 'e')

		{
			putchar (c);
		}
		putchar ('\n');

		return (0);
}
