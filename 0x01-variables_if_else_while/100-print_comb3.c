#include <stdio.h>

/**
  * main - Prints all possible different combinations of two digits
  *
  * Return: Always 0 (Success)
  */
int main(void)
{
	int a, i;

	for (a = '0'; a <= '9'; a++)
	{
		for (i = '0'; i <= '9'; i++)
		{
			if (a < i)
			{
				putchar(a);
				putchar(i);

				if (a != '8' || (a == '8' && i != '9'))
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}

	putchar('\n');

	return (0);
}

