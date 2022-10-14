#include<stdio.h>
#include<stdlib.h>

/**
 * main - Entry Point
 *
 * Return: Always 0 Success
 */

int main(void)
{
	int c;

	while (c < 10)
	{
		putchar(48 + c);
		if(c != 9)
		{
			putchar(',');
			putchar(' ');
		}
		c++;
	}
	putchar('\n');
	return (0);
}
