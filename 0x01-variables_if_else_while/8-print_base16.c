#include <stdio.h>

/**
 * main - program to prints all numbers of base 16 in lowercase
 *
 * intializing variables to data type
 *
 * Return: always 0 (success)
 */
int main(void)
{
	int b;
	char d;

	for (b = '0'; b <= '9';)
	{
		putchar (b);
		b++;
	}
	for (d = 'a'; d <= 'f';)
	{
		putchar (d);
		d++;
	}
	putchar ('\n');

	return (0);
}
