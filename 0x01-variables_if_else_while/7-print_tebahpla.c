#include <stdio.h>

/**
 * main - program that prints the lowercase alphabet in reverse
 *
 *
 * Return: always 0 (success)
 */
int main(void)
{
	char a[26] = "zyxwvutsrqponmlkjihgfedcba";

	for (a = z; a <= 'z'; ++a)
	{
		putchar (a);
	}
	putchar ('\n');

	return (0);
}
