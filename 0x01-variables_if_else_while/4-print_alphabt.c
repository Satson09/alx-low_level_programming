#include <stdio.h>

/**
 * main - program that prints the alphabet in lowercase except q and e
 *
 *initializing variables to data type char
 *
 * Return: always 0 (success)
 */
int main(void)
{
	char b[24] = "abcdfghijklmnoprstuvwxyz";

	while (b <= 'z')

	b++;

	putchar (b);

	putchar ("\n");

	return (0);
}
