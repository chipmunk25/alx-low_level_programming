#include <stdio.h>

/**
 * list all the natural numbers below 10 that are multiples of 3 or 5, we get 3, 5, 6 and 9. 
 * Description: list all the natural numbers below 10 that are multiples of 3 or 5, we get 3, 5, 6 and 9. 
 * Return: void
 */
int main(void)
{
	int sum = 0;
	int i;

	for (i = 0; i < 1024; i++)
	{
		if (i % 3 == 0 || i % 5 == 0)
		{
			sum += i;
		}
	}
	printf("%d\n", sum);
	return (0);
}
