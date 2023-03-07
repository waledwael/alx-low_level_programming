#include "main.h"
/**
 * set_string - the value of a pointer to a char.
 * @s: pointer to the pointer
 * @to: pointer to the value
 * Return: void
 */
void set_string(char **s, char *to)
{
	*s = to;
}
