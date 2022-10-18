#include <stdio.h>

/**
 * main - finds and prints the sum of the even-valued terms,
 * followed by a new line
 * Return: Always 0 Success
 */

int main(void)
{
	long int n1 = 1, n2 = 2, sum = n2, n3;

	while (n2 <= 4000000)
	{
		n3 = n1 + n2;
		n1 = n2;
		n2 = n3;
		sum += (n2 % 2 == 0) ? n2 : 0;
	}
	printf("%li\n", sum);
	return (0);
}
