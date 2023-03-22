#include <stdio.h>
#include "main.h"

/**
 * times_table - prints the n times table, starting with 0
 * @n: the highest multiplier to print
 *
 * Return: void
 */
void times_table(int n)
{
	int i, j;

	if (n < 0 || n > 15)
		return;

	for (i = 0; i <= n; i++)
	{
		for (j = 0; j <= n; j++)
		{
			if (j == 0)
				printf("%d", i * j);
			else
				printf(" %3d", i * j);
		}
		printf("\n");
	}
}
