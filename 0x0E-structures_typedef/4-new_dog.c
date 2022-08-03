#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * new_dog - yay! creates a new dog. More dogs!!!
 * @name: new dog's name
 * @age: new dog's age
 * @owner: new dog's owner
 *
 * Return: where's new dog? this points to it!
 **/
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_dog;
	int nameLength, ownerLength;

	new_dog = malloc(sizeof(dog_t));
	if (new_dog == NULL)
		return (NULL);

	nameLength = _strlen(name);
	new_dog->name = malloc(sizeof(char) * nameLength + 1);
	if (new_dog->name == NULL)
	{
		free(new_dog);
		return (NULL);
	}
	new_dog->name = _strcpy(new_dog->name, name);
	ownerLength = _strlen(owner);
	new_dog->owner = malloc(sizeof(char) * ownerLength + 1);
	if (new_dog->owner == NULL)
	{
		free(new_dog->name);
		free(new_dog);
		return (NULL);
	}

	new_dog->owner = _strcpy(new_dog->owner, owner);
	new_dog->age = age;

	return (new_dog);
}

/**
 * _strlen - determines length of string
 * @s: points to string
 * Return: Length
 */
int _strlen(char *s)
{
	int a;

	for (a = 0; s[a] != '\0'; a++)
	;
	return (a);
}

/**
 * _strcpy - copies pointed to string
 * @dest: points to destination string
 * @src: points to source string
 * Return:dest string address
 */
char *_strcpy(char *dest, char *src)
{
	int a = 0;

	while (src[a] != '\0')
	{
		dest[a] = src[a];
		a++;
	}

	dest[a] = '\0';
	return (dest);
}
