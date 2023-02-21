#include "main.h"
/**
 * main - prints the last digit of a number
 * Return: integer
 */
int print_last_digit(int n)
{
	int res;

	if (n < 0)
		n = -n;
	res = n % 10;
	_putchar('0' + res);
	return (res);
}
