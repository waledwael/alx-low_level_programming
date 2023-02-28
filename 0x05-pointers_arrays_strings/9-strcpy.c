#include "main.h"
/**
 * _strcpy - copies the string pointed to by src,
 * @dest: Destination value
 * @src: source vaile
 * Return: pointer char
 */
char *_strcpy(char *dest, char *src)
{
	int n;

	for (n = 0; src[n] != '\0'; n++)
		dest[n] = src[n];
	dest[n++] = '\0';
	return (dest);
}
