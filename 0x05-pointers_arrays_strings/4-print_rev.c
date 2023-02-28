#include "main.h"
/**
 * print_rev - prints a string, in reverse
 * @s: input string
 * Return: void
 */
void print_rev(char *s)
{
	int n, len;

	while (*s != '\0')
	{
		n++;
		s++;
	}
	for (len = n; len > 0; len--)
	{
		_putchar(*s);
		s--;
	}
	_putchar('\n');
}
