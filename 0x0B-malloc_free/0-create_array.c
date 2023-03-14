#include "main.h"
#include <stdlib.h>
/**
 * create_array - creates an array of chars
 *  and initializes it with a specific char.
 * @size: the size of the array
 * @c: charactter
 * Return: char
 */
char *create_array(unsigned int size, char c)
{
	char *res;

	unsigned int i;

	if (size == 0)
		return (NULL);
	res = malloc(sizeof(char) * size);
	for (i = 0; i < size; i++)
		res[i] = c;
	return (res);
}
