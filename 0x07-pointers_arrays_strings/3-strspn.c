#include "main.h"
/**
 * _strspn - gets the length of a prefix substring.
 * @s: pointer to the original string
 * @accept: input
 * Return: int
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i;

	unsigned int result = 0;

	while (*s)
	{
		for (i = 0; accept[i] != '\0'; i++)
		{
			if (accept[i] == *s)
			{
				result++;
				break;
			}
			else if (accept[i + 1] == '\0')
				return (result);
		}
		s++;
	}
	return (result);
}
