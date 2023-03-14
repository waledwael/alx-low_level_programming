#include <stdlib.h>
#include "main.h"
/**
 * create_array - creates an array of chars
 * @size: array size
 * @c: inital char
 * Return: char
 */
char *create_array(unsigned int size, char c)
{
	char *res;

	int i;

	if (size == 0)
		return (NULL);
	res =  malloc(sizeof(char) * size);
	for (i = 0; i < size; i++)
		res[i] = c;
	return (res);
}
