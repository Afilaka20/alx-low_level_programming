#include "main.h"
#include <stdio.h>
/**
 * print_alphabet - function to print abc
 *
 * Return: Always success
 */
void print_alphabet(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
		_putchar(c);
	}
	_putchar('\n');
}
