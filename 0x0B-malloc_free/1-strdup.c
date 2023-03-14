#include <stdlib.h>
#include "main.h"
/**
 * _strdup - returns a pointer to a newly allocated space in memory,
 * which contains a copy of the string given as a parameter.
 * @str: input string
 * Return: pointer
 */
char *_strdup(char *str)
{
	char *res;

	int i, len = 0;

	if (str == NULL)
		return (NULL);
	while (str[len] != '\0')
		len++;
	res = malloc(sizeof(char) * (len + 1));
	for (i = 0; str[i]; i++)
		res[i] = str[i];
	return (res);
}
