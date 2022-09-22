#include "main.h"
/**
 * _strncpy - C function that copies a string, including the terminating null byte
 * If the length of source string is less that max byte, the remainder of the destination string is filled with null bytes.
 * works identically to the standard library function 'strncpy'
 * @dest: buffer storing the string copy
 * @src: the source of the string
 * @n: max number of the byte copied
 * Return: returns
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];

	for ( ; i < n; i++)
		dest[i] = '\0';

	return (dest);
}
