#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - program will assign a random number to the variable n
 *	if positive, negative or is zero
 *
 * Initialing variable n  to random
 *
 * Return: always 0 (success)
 */
int main(void)
{
	int n;

	srand(time(0));

	n = rand() - RAND_MAX / 2;
	if (n > 0)

		printf("%d is %s\n", n, "positive");

	else if (n < 0)

		printf("%d is %s\n", n, "negative");

	else
		printf("%d is %s\n", n, "zero");

	return (0);
}
