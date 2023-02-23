#include <stdio.h>

/**
 * main - program that prints all possible combinations of single-digit numbers
 *
 * initializing variables to data type
 *
 * Return: always 0 (success)
 */
int main(void)
{
	int i;

	for (i = 0; i <= 10; i++)
	{
		putchar (i);
	}
		for (i < 9;)
	{
		putchar (',');
		putchar (32);
	}
	putchar ('\n');

	return (0);
}
