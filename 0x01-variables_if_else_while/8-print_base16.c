#include <stdio.h>
/**
 * main - prints all the numbers of base 16 in lowercase
 *
 * Return: 0
 */
int main(void)
{
	char a = '0';

	while (a <= '9')
		putchar(a++);
	a = 'a';
	while (a <= 'f')
		putchar(a++);
	putchar('\n');
	return (0);
}
