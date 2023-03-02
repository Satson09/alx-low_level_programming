#include "main.h"
/**
 *_strncat - concatenates two strings
 * @dest: dest string
 * @src: src string
 * @n: limit
 * Return: pointer to resulting string
 */
char *_strncat(char *dest, char *src, int n)
{
	int j = 0, i = 0;

	while (*(dest + j) != 0)
	{
		j++;
	}
	while (*(src + i) != 0)
	{
		*(dest + j + i)	= *(src + i);
		if (i >= n)
			break;
		i++;
	}

	*(dest + j + i) = 0;
	return (dest);
}
