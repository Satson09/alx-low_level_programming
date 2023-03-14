#include <stdio.h>
#include "main.h"
/**
 * main - program that prints its name, followed by a new line
 * @argc: Number of command line
 * @argv: Array name
 * Return: always 0 (success)
 */
int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", *argv);

	return (0);
}
