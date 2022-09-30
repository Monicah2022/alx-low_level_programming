#include "main.h"
/**
 * _memset - fills a memory block with a specific value
 * @s: starting address of memory that is to be filled
 * @b: the desired value outcome
 * @n: number of bytes to be changed
 *
 * Return: changed array with new value for n bytes
 */
char *_memset(char *s, char b, unsigned int n)
{
	int i = 0;

	for (; n > 0; i++)
	{
		s[i] = b;
		n--;
	}
	return (s);
}
