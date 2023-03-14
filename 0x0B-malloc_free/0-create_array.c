<<<<<<< HEAD
#include "main.h"
#include <stdlib.h>
/**
 * create_array - creates an array of chars
 *  and initializes it with a specific char.
 * @size: the size of the array
 * @c: charactter
=======
#include <stdlib.h>
#include "main.h"
/**
 * create_array - creates an array of chars
 * @size: array size
 * @c: inital char
>>>>>>> 2203f27101a83a0b9f9fb337b1b4234b1553f2d8
 * Return: char
 */
char *create_array(unsigned int size, char c)
{
	char *res;

<<<<<<< HEAD
	unsigned int i;

	if (size == 0)
		return (NULL);
	res = malloc(sizeof(char) * size);
=======
	int i;

	if (size == 0)
		return (NULL);
	res =  malloc(sizeof(char) * size);
>>>>>>> 2203f27101a83a0b9f9fb337b1b4234b1553f2d8
	for (i = 0; i < size; i++)
		res[i] = c;
	return (res);
}
