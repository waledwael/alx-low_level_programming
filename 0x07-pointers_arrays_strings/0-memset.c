#include "main.h"
/**
 * _memset - fills memory with a constant byte.
 * @s: pointer to the starting address
 * @b: constant byte
 * @n: nuber of bytes to change
 * Return: a pointer to the memory area s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	for (; i < n; i++)
		s[i] = b;
	return (s);
}
