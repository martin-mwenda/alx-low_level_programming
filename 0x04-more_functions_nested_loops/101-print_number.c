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
void print_number(int num)
{
	unsigned int temp;

	temp = num;
	/*Check if the number is negative */
	if (num < 0)
	{
		num *= -1;
		temp = num;
		_putchar('-');
	}

	temp /= 10;
	if (temp != 0)
		/* Recursive function */
		print_number(temp);
	_putchar((unsigned int) num % 10 + '0');
}
