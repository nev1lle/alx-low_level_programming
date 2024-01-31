#include <stdlib.h>
#include "dog.h"

/**
 * _strlen - returns the length string s
 * @s: the string to check for its length
 * Return: the length of the string
 */
int _strlen(char *s)
{
	int i = 0;

	while (s[i] != '\0')
		i++;

	return (i);
}

/**
 * _strcpy - copies the string pointed to by src
 * including the terminating null byte to the buffer pointed to by dest
 * @dest: the pointer to the buffer to copy the string to.
 * @src: the pointer to the string to copy
 * Return: the pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	int i;
	int length = 0;

	while (src[length] != '\0')
		length++;

	for (i = 0; i < length; i++)
	{
		dest[i] = src[i];
	}
	dest[i] = '\0';

	return (dest);
}

/**
 * new_dog - creates a new dog.
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 * Return: pointer to the new dog on success,NULL on failure
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *otherdog;
	int len1, len2;

	len1 = _strlen(name);
	len2 = _strlen(owner);

	otherdog = malloc(sizeof(dog_t));
	if (otherdog == NULL)
		return (NULL);

	otherdog->name = malloc(sizeof(char) * (len1 + 1));
	if (otherdog->name == NULL)
	{
		free(otherdog);
		return (NULL);
	}
	otherdog->owner = malloc(sizeof(char) * (len2 + 1));
	if (otherdog->owner == NULL)
	{
		free(otherdog);
		free(otherdog->name);
		return (NULL);
	}
	_strcpy(otherdog->name, name);
	_strcpy(otherdog->owner, owner);
	otherdog->age = age;

	return (otherdog);
}

