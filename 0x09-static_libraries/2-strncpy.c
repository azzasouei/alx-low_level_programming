#include "main.h"

/**
 * _strncpy - function that copies a string
 * @dest: pointer to the destination input buffer
 * @src:A pointer to the source input buffer
 * @n:maximum number of characters to copy
 *             from the source string
 * Return: @dest
*/

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
