#include <stdio.h>

/**
 * main - Entry point
 * Description: prints the first 50 Fibonacci numbers,
 * Return: 0 (success)
 */

int main(void)
{
	int n = 50;
	int first = 1, second = 2, i, next;

	printf("%d, %d, ", first, second);

	for (i = 3; i <= n; i++)
	{
		next = first + second;
		printf("%d", next);

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
