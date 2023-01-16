#include "main.h"

/**
 * _strncat - concatenates two string
 * it will use at most n bytes from src
 * @dest: first string
 * @src: second string
 * @n: number of bytes
 * Return: dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int i = 0;
	int j = 0;

	while (dest[i] != '\0')
		i++;
	while (src[j] != '\0' && n != j)
	{
		*(dest + i) = src[j];
		j++;
		i++;
	}
	*(dest + i) = '\0';
	return (dest);
}
