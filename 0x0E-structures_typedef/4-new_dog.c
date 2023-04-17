#include <stdlib.h>
#include "dog.h"

/**
 * _strlen - function that returns the length of a string
 *
 * @s: parameter
 *
 * Return: a
 */

int _strlen(char *s)
{
	int a;

	a = 0;
	while (s[a] != '\0')
	{
		a++;
	}
	return (a);
}

/**
 * *_strcpy - function that copies the string pointed to by src
 *
 * @dest: parameter
 *
 * @src: parameter
 *
 * Return: dest
 */

char *_strcpy(char *dest, char *src)
{
	int l, i;

	l = 0;
	while (src[len] != '\0')
	{
		l++;
	}
	for (i = 0; i < l; i++)
	{
		dest[i] = src[i];
	}
	dest[i] = '\0';
	return (dest);
}

/**
 * new_dog - function that creates a new dog
 *
 * @name: name parameter
 *
 * @age: age parameter
 *
 * @owner: owner parameter
 *
 * Return: dog
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;
	int l1, l2;

	l1 = _strlen(name);
	l2 = _strlen(owner);
	dog = malloc(sizeof(dog_t));
	if (dog == NULL)
		return (NULL);
	dog->name = malloc(sizeof(char) * (l1 + 1));
	if (dog->name == NULL)
	{
		free(dog);
		return (NULL);
	}
	dog->owner = malloc(sizeof(char) * (l2 + 1));
	if (dog->owner == NULL)
	{
		free(dog);
		free(dog->name);
		return (NULL);
	}
	_strcpy(dog->name, name);
	_strcpy(dog->owner, owner);
	dog->age = age;
	return (dog);
}
