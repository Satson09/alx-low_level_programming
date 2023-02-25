#include <stdio.h>

/**
 * main - program to prints all possible different combinations of three digits
 *
 * assigning variables to data type
 *
 * Return: always 0 (success)
 */

int main(void)
{
	int i;
	int j;
	int k;

	for (i = 0; i < 8; i++)
	{
		for (j = i + 1; j < 9; j++)
		{
			for (k = j + 1; k < 10; k++)
			{
				putchar (i + '0');
				putchar (j + '0');
				putchar (k + '0');
			}
			putchar (44);
			putchar (32);
		}
		putchar ('\n');
	}
	return (0);
}
