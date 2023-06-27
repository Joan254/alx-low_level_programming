#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define PASSWORD_LENGTH 8

/**
 * main - generates random valid passwords
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	srand(time(NULL));

	const char charset[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789!@#$^&*?";

	char password[PASSWORD_LENGTH + 1];

	int i;

	for (i = 0; i < PASSWORD_LENGTH; i++)
	{
		password[i] = charset[rand() % (sizeof(charset) - 1)];
	}

	password[PASSWORD_LENGTH] = '\0';

	printf("Generated Password: %s\n", password);

	return (0);
}

