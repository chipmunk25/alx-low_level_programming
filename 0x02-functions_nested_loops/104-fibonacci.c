#include <stdio.h>

/**
 * main - Entry point
 * Description: prints the first 98 Fibonacci numbers
 * Return: 0 (success)
 */
int main(void)
{
	int first = 1, second = 2, next, count = 2;

	printf("%d, %d, ", first, second);
	while (count < 98)
	{
		next = first + second;
		printf("%d", next);
		if (count < 97)
			printf(", ");
		first = second;
		second = next;
		count++;
	}
	printf("\n");
	return (0);
}
