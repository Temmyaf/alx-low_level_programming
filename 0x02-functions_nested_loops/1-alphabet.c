#include "holberton.h"
#include <stdio.h>
/**
 * main- check the code
 * Returns: Always 0.
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
int main(void)
{
print_alphabet();
return (0);
}
