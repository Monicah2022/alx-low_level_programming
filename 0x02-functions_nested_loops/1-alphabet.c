#include "main.h"

/**
 * print_alphabet - Entry point
 * Description: a function that prints alphabet
 * Return: void
 */
void print_alphabet(void)
{
	char letter = 'a';

	while (letter <= 'z')
	{
		_putchar(letter);
		letter++;
	}
	_putchar('\n');
}
