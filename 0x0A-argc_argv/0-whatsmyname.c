#include <stdio.h>
#include "main.h"
/**
 * main -  prints the name of the program
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: 0
 */
int main(int __attribute__((__unused__)) argc, char *argv[])
{
	printf("%s\n", *argv);
	return (0);
}
