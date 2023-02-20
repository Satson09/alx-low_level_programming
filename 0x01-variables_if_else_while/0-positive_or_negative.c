#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * Main - Entry point
 *
 * Description: determine if a random number is positive, negative or zero
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
