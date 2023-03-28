#include "main.h"
#include <limits.h>

/**
 * _atoi - converts a string to an integer
 * @s: the string to be converted
 *
 * Return: the integer value of the string
 */

int _atoi(char *s)
{
	int sign = 1, num = 0;
	int is_number_found = 0;

	while (*s)
	{
		if (*s == '-')
			sign *= -1;
		else if (*s == '+')
			sign *= 1;
		else if (*s >= '0' && *s <= '9')
		{
			is_number_found = 1;

			if (num > INT_MAX / 10 || (num == INT_MAX / 10 && (*s - '0') > INT_MAX % 10))
			{
				if (sign == 1)
					return INT_MAX;
				else
					return INT_MIN;
			}

			num = num * 10 + (*s - '0');
		}
		else if (is_number_found)
			break;
		s++;
	}
	return num * sign;
}
