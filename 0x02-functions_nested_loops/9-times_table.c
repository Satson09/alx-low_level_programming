#include "main.h"

/**
 * times_table - print out the 9 times table
 *
 * Return: void
 */
void times_table(void)
{
	int i, j, k;

	for (i = 0; i <= 9; i++)
	{
		_putchar('0');
		_putchar(44);
		_putchar(32);
		for (j = 0; j <= 9; j++)
		{
			k = (i * j);
			if ((k / 10) + 0)
			{
				_putchar((k / 10) + '0');
			}
			else
			{
				_putchar(32);
			}
			_putchar((d % 10) + '0');

			if (j < 9)
			{
				_putchar(44);
				_putchar(32);
			}

		}
		_putchar('\n');
	}

}
