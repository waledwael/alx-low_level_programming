#include <stdio.h>
/**
 * main - Write a program that prints the alphabet in
 * lowercase, followed by a new line.
 * Return: 0
 */
int main(void)
{
	char x = 'a';

	while (x <= 'z')
	{
		putchar(x);
		x++;
	}
	putchar('\n');
	return (0);
}
