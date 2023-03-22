#include <stdio.h>

/**
 * main - Entry point
 * Description: prints the first 98 Fibonacci numbers
 * Return: 0 (success)
 */
int main(void)
{
	long first = 1, second = 2, next;
	int count = 2;

	printf("%ld, %ld, ", first, second);
	while (count < 98)
	{
		next = first + second;
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
