#include "main.h"
/**
 * puts2 - prints every other character of a string,
 * starting with the first character
 * @str: input string
 * Return: void
 */
void puts2(char *str)
{
	int len = 0;

	int n;

	while (str[len] != '\0')
	{
		len++;
	}
	for (n = 0; n < len; n += 2)
		_putchar(str[n]);
	_putchar('\n');
}
