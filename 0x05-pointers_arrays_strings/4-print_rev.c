#include "main.h"
/**
 * print_rev - print a reversed string
 * @s: string's pointer.
 *
 */
void print_rev(char *s)
{
	int i = 0;

	while ((*(s + i) != '\0'))
	{
		i++;
	}
	i = i - 1;
	while ((*(s + i) > 0))
	{
		_putchar(s[i]);
		i--;
	}
	_putchar('\n');
}
