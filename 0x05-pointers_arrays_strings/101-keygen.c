#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

#define PASSWORD_LENGTH 10

/**
 * main - program that generates random valid
 * passwords for the program 101-crackme
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char password[PASSWORD_LENGTH + 1] = {'\0'};
	char *alphaLower = "abcdefghijklmnopqrstuvwxyz";
	char *alphaUpper = "ABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789";
	int alphaLower_length = strlen(alphaLower);
	int alphaUpper_length = strlen(alphaUpper);
	int alphabet_length = alphaLower_length + alphaUpper_length;
	char *alphabet = malloc(alphabet_length + 1);
	int i;

	strcpy(alphabet, alphaLower);
	strcat(alphabet, alphaUpper);

	srand(time(NULL));

	for (i = 0; i < PASSWORD_LENGTH; i++)
	{
		int random_index = rand() % alphabet_length;

		password[i] = alphabet[random_index];
	}
	printf("%s\n", password);
	return (0);
}
