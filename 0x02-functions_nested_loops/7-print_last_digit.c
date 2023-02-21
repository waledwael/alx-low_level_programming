#include "main.h"
/**
 * print_last_digit - prints the last digit of a number
 * @n: number could be + or - or 0
 * Return: integer
 */
int print_last_digit(int n)
{
	int res;

	res = n % 10;
	if (res < 0)
		res *= -1;
	_putchar('0' + res);
	return (res);
}
