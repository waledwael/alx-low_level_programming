#include "main.h"
/**
 * print_diagonal - draws a diagonal line on the terminal.
 * @n:  the number of times the character \ should be printed
 * Return: void
 */
void print_diagonal(int n)
{
	int i, j;

	if (n <= 0)
		_putchar('\n');
	else
	{
		for (i = 1; i <= n; i++)
		{
			_putchar('\\');
			_putchar('\n');
			for (j = i; i >= 0; i--)
				_putchar(' ');
		}
		_putchar('\n');
	}
}
