/**
 * main - The entry point
 * Description: Prints the largest prime factor of the number 612852475143.
 * The program first removes all factors of 2, then checks for odd factors 
 * starting from 3. It continues dividing the number by each factor until 
 * the largest prime factor is found. The result is printed to the standard output.
 * Return: Always 0.
 */
int main(void)
{
	long int n;
	long int max;
	long int i;

	n = 612852475143;
	max = -1;

	while (n % 2 == 0)
	{
		max = 2;
		n /= 2;
	}

	for (i = 3; i <= sqrt(n); i = i + 2)
	{
		while (n % i == 0)
		{
			max = i;
			n = n / i;
		}
	}

	if (n > 2)
		max = n;

	printf("%ld\n", max);

	return (0);
}
