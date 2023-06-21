#include <stdio.h>

/**
  * fibonacci_sequence - Prints the first 50 fibonacci numbers
  *
  * Return: Always 0 (Success)
  */

void fibonacci_sequence(int n)
{
	int a;
	int sequence[n];
	sequence[0] = 1;
	sequence[1] = 2;

	for (a = 2; a < n; a++)
	{
		sequence[a] = sequence[a-1] + sequence[a-2];
	}

	for (a = 0; a < n; a++)
	{
		printf("%d", sequence[a]);

		if (a != n-1)
		{
			printf(", ");
		}
	}
	printf("\n");
}

int main()
{
	fibonacci_sequence(50);

	return (0);
}
