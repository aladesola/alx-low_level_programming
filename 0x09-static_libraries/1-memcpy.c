#include "main.h"
/**
 * _memcpy - a function that copies memory area
 * @dest: memory it is stored
 * @src: memory it is copied
 * @n: number of bytes
 *
 * return: copied memory with n bytes changed
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
