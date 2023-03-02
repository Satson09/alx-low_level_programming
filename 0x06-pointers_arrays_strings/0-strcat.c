#include "main.h"
/**
 *_strcat - concatenates two strings
 * @dest: dest string
 * @src: src string
 * Return: pointer to resulting string
 */
char *_strcat(char *dest, char *src)
{
	int i = 0;
	int k = 0;

	while (dest[i] != '\0')
	{
		i++;
	}

	while (src[k] != '\0') {
		dest[i] = src[k];
		i++;
		k++;
	}
	dest[i] = '\0';

	return dest;
}
