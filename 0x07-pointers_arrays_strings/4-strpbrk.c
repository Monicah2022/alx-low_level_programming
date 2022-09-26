#include "main.h"
#include <stdio.h>
/**
* _strpbrk - function locates the first occurrence in the string s
* @s: input source string
* @accept: searching string
* Return: Always 0 (Success)
*/
char *_strpbrk(char *s, char *accept)
{
	int k;

	while (*s)
	{
		for (k = 0; accept[k]; k++)
		{
			if (*s == accept[k])
				return (s);
		}
		s++;
	}

	return ('\0');
}
