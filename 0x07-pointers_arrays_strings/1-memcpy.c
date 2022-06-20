#include "main.h"
/**
 * _memcpy-function copies n bytes from memory area src to memory area dest
 * @n: number of bytes
 * @src: memory area, initial address
 * @dest: memory area, final destination
 * Return: pointer to dest.
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
