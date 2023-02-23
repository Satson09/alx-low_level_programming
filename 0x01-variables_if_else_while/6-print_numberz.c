#include <stdio.h>

/**
 * main -program that prints all single digit numbers base 10 starting from 0
 *
 *
 *
 * Return: always 0 (success)
 */
int main(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		putchar ('0' + i);
	}
	putchar ('\n');

	return (0);
}
