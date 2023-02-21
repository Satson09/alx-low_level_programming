#include <stdio.h>

/**
 * main - prints alpha in lower and upper case
 *
 * Return: always 0 (success)
 */
int main(void)
ilphabets.c

	int ch

	for (ch = 'a'; ch < = 'z'; ch++)
		putchar(ch);

	for (ch = 'A'; ch < = 'Z'; ch++)
		putchar(ch);

	putchar('\n');

	return (0);
}
