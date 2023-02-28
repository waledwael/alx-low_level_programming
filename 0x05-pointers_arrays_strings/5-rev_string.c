#include "main.h"
/**
 * rev_string - reverses a string.
 * @s: input
 * Return: void
 */
void rev_string(char *s)
{
	int n = 0;

	int len;

	char m;

	while (s[n] != '\0')
		n++;
	len = n;
	n--;
	for (len -= 1; len >= (n / 2); len--)
	{
		m = s[len];
		s[len] = s[n - len];
		s[n - len] = m;
	}
}
