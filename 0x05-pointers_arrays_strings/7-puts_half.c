#include "main.h"
/**
 * puts_half - prints half of a string
 * @str: input string
 * Return: void
 */
void puts_half(char *str)
{
	int n = 0;

	int i, len;

	while (str[n] != '\0')
		n++;
	if (n % 2 == 0)
		i = n / 2;
	else
		i = (n - 1) / 2;
	for (len = i; len < n; len++)
		_putchar(str[len]);
	_putchar('\n');
}
