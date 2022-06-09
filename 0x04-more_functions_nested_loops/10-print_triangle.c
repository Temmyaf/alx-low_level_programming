#include "main.h"
/**
 * print_triangle - prints a triangle.
 *
 * @size: size of triangle.
 */
void print_triangle(int size)
{
	int i;
	int j;
	int k;

	if (size > 0)
	{
		for (i = 1; i <= size; i++)
		{
			j = 1;
			while (j <= (size - i))
			{
				_putchar(' ');
				++j;
			}
			k = size - i + 1;
			while (k <= size)
			{
				_putchar('#');
				k++;
			}
			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
