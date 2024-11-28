#include "main.h"

/**
 * print_number - Prints an integer while preserving its sign.
 * @num: The integer to be printed.
 * 
 * Description: This function prints a given integer number `num` to the 
 * standard output. If the number is negative, it first prints the minus 
 * sign, then recursively prints the absolute value of the number. 
 * The function handles both positive and negative integers.
 * 
 * Return: Nothing.
 */
void print_number(int n)
{
	unsigned int t;

	t = n;

	if (n < 0)
	{
		n *= -1;
		t = n;
		_putchar('-');
	}

	t /= 10;
	if (t != 0)
		print_number(t);
	_putchar((unsigned int) n % 10 + '0');
}
