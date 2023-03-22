#include <stdio.h>
#include "main.h"

/**
 * print_times_table - prints the n times table, starting with 0
 * @n: the highest multiplier to print
 *
 * Return: void
 */
void print_times_table(int n)
{
	int i, j;
	int max_chars = 4;

	if (n < 0 || n > 15)
		return;
	while (max_chars < (n * n) / 10 + 2)
	{
		max_chars++;
	}

	for (i = 0; i <= n; i++)
	{
		for (j = 0; j <= n; j++)
		{
			if (j == 0)
				printf("%*d", max_chars, i * j);
			else
				printf(", %*d", max_chars - 2, i * j);
		}
		printf("\n");
	}
}
