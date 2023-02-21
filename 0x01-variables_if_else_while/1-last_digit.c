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
i
	if (n % 10 > 5)
	{

		printf("last digit of %d is %d and is greater than 5\n", n, n % 10);
	}
	else if ((n % 10 < 6) && (n % 10 != 0))
	{
		printf("last digit of %d is %d and is less than 6 and not 0\n", n, n % 10);
	}
	else
	{
		printf("last digit of %d is %d and is 0\n", n, n % 10);
	}

	return (0);

}


