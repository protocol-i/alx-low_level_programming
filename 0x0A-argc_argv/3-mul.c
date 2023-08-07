#include "main.h"
#include <stdio.h>
#include "main.h"

/**
 * main - Prints the multiplication of two args number
 * @argc: arugument counter
 * @argv: argument vector
 * Return: 0
 */
int main(int argc, char *argv[]) {
    if (argc != 3) {
        printf("Error\n");
        return 1;
    }

    int num1, num2;
    if (sscanf(argv[1], "%d", &num1) != 1 || sscanf(argv[2], "%d", &num2) != 1) {
        printf("Error\n");
        return 1;
    }

    int result = num1 * num2;
    printf("%d\n", result);

    return 0;
}
