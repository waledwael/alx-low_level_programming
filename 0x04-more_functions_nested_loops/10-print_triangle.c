#include "main.h"
/**
 * print_triangle -  function that prints a triangle,
 * followed by a new line.
 * @size: is the size of the triangle
 * Return: void
 */
void print_triangle(int size)
{
	int i, j, k;
	
	if (size <= 0)
		_putchar('\n');
	for (i = 0; i < size; i++)
	{
		for (j = (size - i - 1); j > 0; j--)
		{
			_putchar(' ');
		}
		for (k = (i + 1); k > 0; k--)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
}
