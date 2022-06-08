#include "holberton.h"
#include <stdio.h>
/**
 * print_alphabet-  print alphabets.
 * Returns nothing.
 */

void print_alphabet(void)
{
char i = 'a';

for (; i <= 'z'; i++)
{
putchar(i);
}
putchar('\n');
}
/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
print_alphabet();
return (0);
}

