#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/*
 * main: program to assign a random number to variable each time it is executed
 *
 * initialing variable n  to random
 *
 * return: always 0
 */
int main(void)
{
	int n;

	srand(time(0));

	n = rand() - RAND_MAX / 2;
	
	if (n >= 0)

		printf("%d is %s\n", n, "positive");

	else if (n == 0)

		printf("%d is %s\n", n, "zero");

	else
		printf("%d is %s\n", n, "negative");

	return (0);
}
