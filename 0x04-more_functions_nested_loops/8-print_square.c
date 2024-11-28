#include "main.h"

/**
 * print_square - Prints a square of '#' characters.
 * @size: The size of the square.
 * Description: This function prints a square of '#' characters of size `size`.
 * If `size` is less than or equal to 0, only a new line is printed.
 */
void print_square(int size)
{
	int f_iter, s_iter;

	if (size > 0)
	{
		for (f_iter = 1; f_iter <= size; f_iter++)
		{
			for (s_iter = 1; s_iter <= size; s_iter++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
