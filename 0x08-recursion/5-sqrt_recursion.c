#include "main.h"
int check_squ(int c, int n);
/**
 * _sqrt_recursion - return the square root of a number.
 * @n: integer number.
 * Return: sqrt of n.
 */
int _sqrt_recursion(int n)
{
	int i = 1;

	return (check_squ(i, n));
}
/**
 *check_squ - return square root of n.
 * @c: integer used to check for root
 * @n: number
 * Return: integer
 */
int check_squ(int c, int n)
{
	int a = c * c;

	if (a > n)
		return (-1);
	else if (a == n)
		return (c);
	else
		return (check_squ(c + 1, n));
}
