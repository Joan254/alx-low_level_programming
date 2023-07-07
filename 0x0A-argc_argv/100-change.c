#include <stdlib.h>
#include <stdio.h>

/**
 * main - prints the minimum number of coins to make
 * change for an amount of money
 * @argc: argument count
 * @argv: one-dimentional array of strings
 *
 * Return: 0 if the program receives exactly one argument 1 if it does not
 */

int main(int argc, char *argv[])
{
	int cents, coins = 0;

	if (argc != 2)
	{
		printf("Error\n");

		return (1);
	}

	cents = atoi(argv[1]);

	while (cents > 0)
	{
		coins++;

		if ((cents - 25) >= 0)
		{
			cents -= 25;
			continue;
		}
		if ((cents - 10) >= 0)
		{
			cents -= 10;
			continue;
		}
		if ((cents - 5) >= 0)
		{
			cents -= 5;
			continue;
		}
		if ((cents - 2) >= 0)
		{
			cents -= 2;
			continue;
		}

		cents--;
	}

	printf("%d\n", coins);

	return (0);
}
