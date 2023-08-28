#include "main.h"

/**
 * _memcpy - Copy a memory area.
 * @dest: Memory where the data is copied to.
 * @src: Memory where the data is copied from.
 * @n: Number of bytes to copy.
 *
 * Return: A pointer to the destination memory.
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int r = 0;

	for (; r < n; r++)
	{
	dest[r] = src[r];
	}
	return (dest);
}

