#include "main.h"

/**
 * _strcpy - copies the string pointed to by src
 * @dest: variable
 * @src: variable
 * Return: 0
 */
char *_strcpy(char *dest, char *src)
{
	int uzo = 0;

	while (*(src + uzo) != '\0')
	{
		*(dest + uzo) = *(src + uzo);
		uzo++;
	}
	*(dest + uzo) = '\0';

	return (dest);
}
