#include "main.h"
#include <stdlib.h>

/**
 * argstostr - concatenates all the arguments of your program
 * @ac: argument count
 * @av: pointer to array of size ac
 *
 * Return: a pointer to a new string, or NULL if it fails,
 * NULL if ac == 0 or av == NULL
 */

char *argstostr(int ac, char **av)
{
	char *a;

	int i, j, k, total_l;

	total_l = 0, k = 0;

	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < ac; i++)
	{
		j = 0;
		while (av[i][j] != '\0')
		{
			total_l++;
			j++;
		}
		total_l++;
	}
	a = malloc(sizeof(char) * (total_l + 1));
	if (a == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < ac; i++)
	{
		j = 0;
		while (av[i][j] != '\0')
		{
			a[k] = av[i][j];
			k++;
			j++;
		}
		a[k] = '\n';
		k++;
	}
	a[k] = '\0';

	return (a);
}
