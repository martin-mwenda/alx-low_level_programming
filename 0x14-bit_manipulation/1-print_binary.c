#include "mart.h"

/** print_binary - Prints the binary representation of a number
 * @n: The number to representing in binary
 * Return: Nothing
 */
void print_binary(unsigned long int n)
{
	if (n == 0)
	{
		_putchar('0');
		return;
	}
	div(n);
}

/**
 * div - function
 * @n: prameter
 * Return: not
 */
void div(unsigned long int n)
{
	if (n < 1)
		return;

	div(n >> 1);
	if (n & 1)
		_putchar('1');
	else
		_putchar('0');
}

