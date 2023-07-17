#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * _strlen - returns the length of a string
 * @s: string to be used
 *
 * Return: length of the string
 */
int _strlen(char *s)
{
	int l = 0;

	for (; *s != '\0'; s++)
	{
		l++;
	}

	return (l);
}

/**
 * _strcpy - copies the string pointed to by src
 * @dest: destination
 * @src: source
 *
 * Return: dest
 */

char *_strcpy(char *dest, char *src)
{
	int b;

	for (b = 0; src[b] != '\0'; b++)
	{
		dest[b] = src[b];
	}

	dest[b++] = '\0';

	return (dest);
}

/**
 * new_dog - creates a new dog
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 *
 * Return: pointer to the new dog (Success), NULL otherwise
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_d;
	int name_l, owner_l;

	name_l = _strlen(name);
	owner_l = _strlen(owner);

	new_d = malloc(sizeof(dog_t));
	if (new_d == NULL)
		return (NULL);

	new_d->name = malloc(sizeof(char) * (name_l + 1));
	if (new_d->name == NULL)
	{
		free(new_d);
		return (NULL);
	}
	new_d->owner = malloc(sizeof(char) * (owner_l + 1));
	if (new_d->owner == NULL)
	{
		free(new_d);
		free(new_d->name);
		return (NULL);
	}
	_strcpy(new_d->name, name);
	_strcpy(new_d->owner, owner);
	new_d->age = age;

	return (new_d);
}
