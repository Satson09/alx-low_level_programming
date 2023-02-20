#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * Main - random number for the last digit number stored in variable
 *
 * if greater, equal to or less than
 *
 * assigning random to n
 *
 * string last digit of n
 *
 * Return: always 0 (success)
 */
int main(void)
{
	int n;
	
	srand(time(0));

	n = rand() - RAND_MAX / 2;

	
	if (n % 10 != 0 && n % 10 < 6)

	printf("last digit of %d is %d "and is greater than % 5");

	else if (n % 10 == 0)

	printf("%d %d n "and is %d 0\n");

	else

	printf("%d is %d" n "and is less than 6 and not 0\n");

	return (0);

}


