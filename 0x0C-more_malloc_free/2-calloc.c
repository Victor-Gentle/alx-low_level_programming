#include "main.h"
#include <stdlib.h>

/**
 * _calloc - allocates memory for an array, using malloc
 * @nmeb: number of elements of array
 * @size: size of each element of array
 * Return: pointer to be allocated memory (SUCCESS)
 * NULL if @nmemb or @size is 0 (FAILURE) or
 * NULL if insufficient memory was available (FAILURE)
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *block;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);
	block = malloc(nmemb * size);
	if (block != NULL)
	{
		for (i = 0; i < (nmemb * size); i++)
			block[i] = 0;
		return (block);
	}
	else
		return (NULL);
}
