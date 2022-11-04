#include "main.h"

/**
 * _strstr - locates a substring
 * @needle: Character to check
 * @haystack: Character to look for
 * Return: Pointer
 */

char *_strstr(char *haystack, char *needle)
{
	while (*haystack)
	{
		char *src = haystack;
		char *sub = needle;

		while (*haystack && *sub && *haystack == *sub)
		{
			haystack++;
			sub++;
		}
		if (!*sub)
			return (src);
		haystack = src + 1;
	}
	return (0);
}


