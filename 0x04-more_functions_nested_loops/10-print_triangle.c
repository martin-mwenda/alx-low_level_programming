#include "main.h"

/**
 * print_triangle - Prints a right-angled triangle of '#' characters.
 * @size: The height and base size of the triangle.
 * Description: This function prints a right-angled triangle with the
 * specified `size`. If `size` is less than or equal to 0, it prints only
 * a new line. The triangle is aligned to the right with the right angle
 * at the bottom left.
 */
void print_triangle(int size)
{
	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		int a, b;

		for (a = 1; a <= size; a++)
		{
			for (b = a; b < size; b++)
			{
				_putchar(' ');
			}

			for (b = 1; b <= a; b++)
			{
				_putchar('#');
			}

			_putchar('\n');
		}
	}
}
