#include <stdio.h>

/**
 * main - program prints r[2] = 98
 * Return: 0
*/

int main(void)
{
	int n;
	int r[5];
	int *p;

	r[2] = 1024;
	p = &n;
  /*
   * writes your line of code here...
   * Remember:
   * - you are not allowed to use a
   * - you are not allowed to modify p
   * - only one statement
   * - you are not allowed to code anything else than this line of code
   */
	*(p + 5) = 98;
  /* ...so that this prints 98\n */
	printf("r[2] = %d\n", r[2]);
	return (0);
}
