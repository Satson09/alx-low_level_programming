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
	int j;

	for (i = '0'; i < '9'; i++)

		j = i + '1';

		do {
			putchar ('0' + i);
			putchar ('0' + j);

		if (i < '8')
			{
				putchar (44);
				putchar (32);
			}
			j++;
		} while (j <= '9');

	}
	putchar ('\n');


	return (0);
}
