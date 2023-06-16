#include <stdio.h>

/**
  * main - Prints all possible different combinations of three digits
  *
  * Return: Always 0 (Success)
  */
int main(void)
{
	int a, i, b;

	for (a = '0'; a <= '9'; a++)
	{
		for (i = '0'; i <= '9'; i++)
		{
			for (b = '0'; b <= '9'; b++)
			{
				if (a < i && i < b)
				{
					putchar(a);
					putchar(i);
					putchar(b);

					if (a != '7')
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}

	putchar('\n');

	return (0);
}

