#include "main.h"
/**
 * print_number - print numbers
 * @n: integer
 */
void print_number(int n)
{
	int limit;
	int a;
	int factor = 1;

	a = n % 10;
	n = n / 10;
	if (n < 0 || a < 0)
	{
		n = -n;
		a = -a;
		_putchar('-');
	}
	while (n / dividor >= 10)
		factor = factor * 10;
	limit = factor;
	if (n < 10 && n != 0)
	{
		_putchar(n + '0');
	}
	else if (n != 0)
	{
		while (limit >= 1)
		{
			_putchar(n / limit + '0');
			n = n  % limit;
			limit = limit / 10;
		}
	}
	_putchar(a + '0');
}
