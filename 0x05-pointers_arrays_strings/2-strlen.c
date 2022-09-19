#include "main.h"

/**
 * _strlen - checks the length of a string
 * @s: string to check
 *
 * Return: returns length as integer;
*/

int _strlen(char *s);
{
	int len = 0;

	while (*(s + len) != '\0')
		len++;
	return (len);
}
