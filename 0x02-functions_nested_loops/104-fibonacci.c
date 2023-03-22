#include <stdio.h>

/**
 * main - Entry point
 * Description: prints the first 98 Fibonacci numbers
 * Return: 0 (success)
 */
int main(void)
{
	unsigned long first = 1, second = 2, next;
	int count = 2;

	printf("%ld, %ld, ", first, second);
	while (count < 98)
	{
		next = first + second;
		if (count > 93)
		{
			long lower = next / 100000000;
			long higher = next % 100000000;

			printf("%ld%ld", lower, higher);
		}
		else
			printf("%ld", next);
		if (count < 97)
			printf(", ");
		first = second;
		second = next;
		count++;
	}
	printf("\n");
	return (0);
}
