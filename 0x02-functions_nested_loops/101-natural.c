#include <stdio.h>

/**
  * main - Prints the sum of all multiples of 3 or 5 up to 1024
  *
  * Return: Always 0 (Success)
  */
int main(void)
{
	int a, sum = 0;

	while (a < 1024)
	{
		if ((a % 3 == 0) || (a % 5 == 0))
		{
			sum += a;
		}

		a++;
	}

	printf("%d\n", sum);
	return (0);
}
