#include "main.h"

/**
 * print_alphabet - prints the alphabets in a lowercase
 * Return: On success 1
 */
void print_alphabet(void)
{
	char la;

	for (la = 'a'; la <= 'z'; la++)
		_putchar(la);

	_putchar('\n');
}
