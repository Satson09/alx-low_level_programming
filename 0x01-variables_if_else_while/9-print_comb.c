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

	for (i = 0; i <= 9;)
	{
		putchar ('i');
		if (i != 9)
	{
		putchar (',');
		putchar (' ');
	}
		i++;
	}
	putchar ('\n');

	return (0);
}
