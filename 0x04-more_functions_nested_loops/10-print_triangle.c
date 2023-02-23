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
	else
	{
		for (i = 1; i <= size; i++)
		{
			for (j = i; j < size; j++)
			{
				_putchar(' ');
			}
			for (k = 1; k <= i; k++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
