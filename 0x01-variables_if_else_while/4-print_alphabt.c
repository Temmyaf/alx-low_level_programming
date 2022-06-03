#include <stdio.h>
/**
 * main - entry  point
 *
 * Return: 0
 */
int main(void)
{
char a;
for (a = 'a'; a <= 'z'; a++)
{
if (a != 101 || a != 113)
{
putchar(a);
}
}
putchar('\n');
return (0);
}
