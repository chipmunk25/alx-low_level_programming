#include "main.h"

/**
 * print_alphabet - print alphabet in lowercase
 *
 * Return: void
 */
void print_alphabet(void)
{
	char ch;
	for(ch = 'a' ; ch <= 'z'; ++ch)
	{
		_puchar(ch);
		_puchar("\n");
	}
	return (0);
}
