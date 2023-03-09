#include "main.h"

/**
 * _strlen_recursion - that returns the length of a string.
 *
 * @s: the pointer variable to string
 * Return: the lenght of the string
 */
int _strlen_recursion(char *s)
{
	if (*s != '\0')
	{
		return (1 + _strlen_recursion(s + 1));
	}
	else
	{
		return (0);
	}
}
