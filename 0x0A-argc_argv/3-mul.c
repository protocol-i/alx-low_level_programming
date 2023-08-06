#include "main.h"
#include <stdio.h>
#include "main.h"

/**
 * main - Prints the multiplication of two args number
 * @argc: arugument counter
 * @argv: argument vector
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int n1 = 0, n2 = 0;

	if (argc == 3)
	{
		n1 = atoi(argv[1]);
		n2 = atoi(argv[2]);
		printf("%d\n", n1 * n2);
	}
	else
	{
		printf("Error\n");
		return (1);
	}

	return (0);
}
