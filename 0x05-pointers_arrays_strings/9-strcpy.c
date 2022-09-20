#include "main.h"
/**
 * _strcpy - Entry point
 * @dest: A pointer
 * @src: A pointer
 * Return: 0
 */

char *_strcpy(char *dest, char *src)
{
	int a;

	a = 0;

	while (src[a] != '\0')
	{
		dest[a] = src[a];
		a++;
	}
	dest[a] = '\0';

	return (dest);
}
