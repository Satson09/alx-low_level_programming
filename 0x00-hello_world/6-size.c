#include <stdio.h>

/**
 * prints the size of various types on the computer is compiled and run on
 * main: Entry point
 * Declaring variables to data types
 * printing sizes of data types
 * Return: Always 0
 * format specifier %lu for unsigned int or unsigned long
 */
int main(void)
{

	int a
	char c
	long int b
	long long int d
	float f

	sizeof() =[a, c, b, d, f]

	printf("\n size of int: %lu", sizeof(a));

	printf("\n size of char: %lu", sizeof(b));

	printf("\n size of long int: %lu", sizeof(b));

	printf("\n size of long long int: %lu", sizeof(d));

	printf("\n size of float: %lu", sizeof(f));

	return (0);
}

	
