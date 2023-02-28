#include "main.h"
/**
 * rev_string - reverses a string.
 * @s: input
 * Return: void
 */
void rev_string(char *s)
{
	int n = 0;

	int len = 0;

	char m;

	while (s[n] != '\0')
		n++;
	len = n;
	for (n = len - 1; n >= (len / 2); n--)
	{
		m = s[n];
		s[n] = s[len - n - 1];
		s[len - n - 1] = m;
	}
}
