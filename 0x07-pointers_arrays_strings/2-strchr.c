#include <stdio.h>
#include "main.h"
/**
 * _strchr - locates a character in a string.
 * @s: pointer to the string
 * @c: the character to be found
 * Return: the character locatoin or null
 */
char *_strchr(char *s, char c)
{
	unsigned int i;

	for (i = 0; s[i] != '\0'; i++)
		if (s[i] == c)
			return (s + i);
	return (NULL);
}
