#include <stdio.h>
/**
 * main -  prints the alphabet in lowercase
 *
 * Return: 0
 */
int main(void)
{
	char x = 'a';

	while (x <= 'z')
	{
		if (x == 'e' || x == 'q')
			x++;
		putchar(x);
		x++;
	}
	putchar('\n');
	return (0);
}
