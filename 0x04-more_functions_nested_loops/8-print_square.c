/**
 * print_square - Prints a square of '#' characters.
 * @size: The size of the square.
 * Description: This function prints a square of '#' characters of size `size`.
 * If `size` is less than or equal to 0, only a new line is printed.
 */
void print_square(int size)
{
	if (size <= 0)
	{
		_putchar('\n');
	} else
	{
		int i, j;

		for (i = 0; i < size; i++)
		{
			for (j = 0; j < size; j++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
