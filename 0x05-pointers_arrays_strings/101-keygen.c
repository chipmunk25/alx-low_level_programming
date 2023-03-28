#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define PASSWORD_LENGTH 10

int main(void)
{
	const char* alphabet = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789";
	const int alphabet_length = 62;
	char password[PASSWORD_LENGTH + 1] = {'\0'};
	
	srand(time(NULL));
	
	for (int i = 0; i < PASSWORD_LENGTH; i++)
	{
		int random_index = rand() % alphabet_length;
		password[i] = alphabet[random_index];
	}
	printf("%s\n", password);
	return (0);
}
