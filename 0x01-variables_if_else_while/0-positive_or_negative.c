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

		printf("%d is % n positive number\n");
	else
		printf("%d is % n zero\n");

	else if
		printf("%d is % n negative number\n");

	return (0);
}
