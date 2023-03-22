#include <stdio.h>
#include "main.h"

/**
 * times_table - prints the n times table, n should not be less than 0 or greater than 15
 * Description: prints the n times table, n should not be less than 0 or greater than 15
 * @n: starting number
 */
void print_times_table(int n) 
{
       	if (n > 0 || n < 15)
       	{
		for (int i = 0; i <= n; i++)
		{
			for (int j = 0; j <= n; j++)
			{
				printf("%d ", i * j);
			}
			printf("\n");
		}
	}
}
