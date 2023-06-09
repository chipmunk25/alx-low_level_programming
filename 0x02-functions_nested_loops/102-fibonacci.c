#include <stdio.h>

/**
 * main - Entry point
 * Description: prints the first 50 Fibonacci numbers,
 * Return: 0 (success)
 */

int main(void)
{
	int n = 50;
	int i;
	long int first = 1, second = 2, next;

	printf("%ld, %ld, ", first, second);

	for (i = 3; i <= n; i++)
	{
		next = first + second;
		printf("%ld", next);

		if (i != n)
		{
			printf(", ");
		}

		first = second;
		second = next;
	}
	printf("\n");
	return (0);
}
