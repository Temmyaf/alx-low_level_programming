#include "main.h"
/**
 * print_line - print a line n times
 * @n: the number of times
 *
 * Return: void
 */
void print_line(int n)
{
	while (n-- > 0)
		_putchar('_');
	_putchar('\n');
}
