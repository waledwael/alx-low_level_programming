#include "main.h"
/**
 * print_most_numbers -  prints the numbers, from 0 to 9
 * Return: void
 */
void print_most_numbers(void)
{
	int x;

	for (x = 0; x < 10; x++)
	{
		if (x != 2 && x != 4)
			_putchar('0' + x);
		else
			continue;
	}
	_putchar('\n');
}
