#include <stdio.h>
/**
 * main - show the max prime number
 *
 * Return: 0
 */
int main(void)
{
int i;
long l = 0;
long n = 612852475143;

i = 2;
while (n != 1)
{
if (n % i == 0)
{
	n = n / i;
	if (i > l)
	{
		l = i;
	}
		i = 2;
	}
	else
	{
		i++;
	}
	}
	printf("%ld\n", l);
	return (0);
}
