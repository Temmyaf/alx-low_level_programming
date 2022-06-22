#include "main.h"
int test(int x, int n);
/**
 * is_prime_number - check if a number is a prime number.
 * @n: integer number
 * Return: 1 if n prime, else 0.
 */
int is_prime_number(int n)
{
	return (test(2, n));
}
/**
 * test - test for prime number
 * @x: counter
 * @n: number to test.
 * Return: integer
 */
int test(int x, int n)
{
	if (n <= 1)
		return (0);
	else if (x == n)
		return (1);
	else if (n % x == 0)
		return (0);
	else
		return (test(x + 1, n));
}
