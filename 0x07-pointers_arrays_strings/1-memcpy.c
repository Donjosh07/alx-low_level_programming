#include "main.h"

/**
 * _memcpy - Copy a memory area.
 * @dest: Memory where the data is copied to.
 * @src: Memory where the data is copied from.
 * @n: Number of bytes to copy.
 *
 * Return: copied memory with n bytes changed
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int r = 0;
	int i = n;

	for (; r < i; r++)
	{
	dest[r] = src[r];
	n--;
	}
	return (dest);
}
