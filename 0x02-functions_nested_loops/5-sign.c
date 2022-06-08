#include "holberton.h"
/**
 * print_sign()- prints the sign of a number
 * @n: type int
 * Return: 1 if positive or 0 if zero or -1 if negative
 */
int print_sign(int n)
{
if (n > 0)
{
_putchar('+');
return (1);
}
else if (n == 0)
{
putchar('0');
return (0);
}
else
{
putchar('-');
return (-1);
}
}
