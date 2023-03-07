#include <stdio.h>
#include "main.h"
/**
 * print_diagsums - prints the sum of the two diagonals
 * of a square matrix of integers.
 * @a: input
 * @size: input size
 * Return: void
 */
void print_diagsums(int *a, int size)
{
	int i, res1 = 0, res2 = 0;

	for (i = 0; i <= (size * size); i = i + size - 1)
		res1 += a[i];

	for (i = size - 1; i < ((size * size) - size); i = i + size - 1)
		res2 += a[i];
	printf("%d, %d\n", res1, res2);
}
