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

		printf("%d is %rand()\n", n, "positive number");
	else
		printf("%d is %rand()\n", n, "zero");

	else if
		printf("%d is %rand()\n", n, "negative number");

	return (0);
}
