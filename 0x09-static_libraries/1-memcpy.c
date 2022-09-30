#include "main.h"
/**
 * _memcpy - a function that copies memory area
 * @dest: source string
 * @src: string to be filled
 * @n: length of buffer
 *
 * Return: copied memory with n byted changed
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
