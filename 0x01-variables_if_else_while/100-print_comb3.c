#include <stdio.h>

/**
 * main - program that prints all possible different combinations of two digits
 *
 * adding variables to data type
 *
 * Return: always 0 (success)
 */
int main(void)
{
	int i;
	int x;

	for (i = 0; i <= '9'; i++;)
	{
		x = i + 1;

	while (x < 10)

		x++;

		putchar ('0' + x);
		putchar ('0' + i);
		{
			putchar (44);
			putchar (32);
		}
	}
	putchar ('\n');

	return (0);
}
