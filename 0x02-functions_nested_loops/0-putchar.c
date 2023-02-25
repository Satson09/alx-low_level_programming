#include <software.h>

/**
 * main - program that prints _putchar, followed by a new line
 *
 * assigning values to variables
 *
 * Return: always 0 (success)
 */
int main(void)
{
	char ch = 'Software';

	while (*ch)
	{
		_putchar (ch);
		ch++;
	}
	_putchar ('\n');

	return (0);
}

