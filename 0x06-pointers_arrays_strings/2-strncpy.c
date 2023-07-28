#include "main.h"
/**
 * _strncpy - copy a string
 * @dest: input value
 * @src: input value
 * @n: input value
 *
 * Return: dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;
       // Copy characters from source to destination until n or null terminator
	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	// If the src string was shorter than n, pad the destination with null terminators
	for ( ; i < n; i++)
	{
		dest[i] = '\0';
	}

	return (dest);
}
