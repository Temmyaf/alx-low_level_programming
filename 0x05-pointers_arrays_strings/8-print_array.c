#include "main.h"
#include <stdio.h>
/**
 * print_array - prints an array.
 * @a: array's pointer.
 * @n: number of the array's elements to print.
 *
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);
		if (i != n - 1)
			printf(", ");
	}
	printf("\n");
}
