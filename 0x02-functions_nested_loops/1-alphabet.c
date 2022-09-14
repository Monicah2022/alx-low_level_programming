#include "stdio.h"
/**
 * main - Entry point
 * Description: Prints '_putchar\n'
 * Return: Always 0 (success)
 */
int main(void)
{
char str[] = "_putcahr\n";
int i = 0;

while (str[i] != '\0')
        {
	char c = str[i];

	_putchar(c);
	i++;
	}
return (0);
}
