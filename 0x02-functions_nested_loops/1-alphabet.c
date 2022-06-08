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
