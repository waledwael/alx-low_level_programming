#include <stdio.h>
/**
 * main - finds and prints the largest prime factor of the number 612852475143
 * Return: Always 0 (Success)
 */
int main(void)
{
	long int n, i;

	n = 612852475143;

	for (i = (n - 1); i > 0; i--)
	{
		if (n % i == 0)
		{
			printf("%ld\n", i);
			break;
		}
	}
	return (0);
}
