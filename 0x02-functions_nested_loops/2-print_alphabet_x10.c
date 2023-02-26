#include "main.h"

/**
 * main - Prints void print_alphabet_x10,in lowercase, with a new line
 *
 * assigning values and variable to data type
 *
 */
void print_alphabet_x10(void)
{
	char ch;
	int i;

		for (i = 0; i < 10; i++)
		{
			for (ch = 'a'; ch <= 'z'; ch++)
			{
				_putchar(ch);
			}
			_putchar('\n');
		}

}



