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

	int a;
	char c;
	long int b;
	long long int d;
	float f;

	sizeof() =[a, c, b, d, f]

	printf("\n size of int: %lu byte(s)", sizeof(a));

	printf("\n size of char: %lu byte(s)", sizeof(b));

	printf("\n size of long int: %lu byte(s)", sizeof(b));

	printf("\n size of long long int: %lu byte(s)", sizeof(d));

	printf("\n size of float: %lu byte(s)", sizeof(f));

	return (0);
}

	
