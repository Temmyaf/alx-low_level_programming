#include <stdio.h>
/**
 * main - entry point
 *
 * Return: 0
 */
int main(void)
{
char a;
int i;
for (i = 48; i < 58; i++)
{
puchar(i);
}
for (a = 'a'; a <= 'f', a++)
putchar(a);
putchar('\n');
return (0);
}
