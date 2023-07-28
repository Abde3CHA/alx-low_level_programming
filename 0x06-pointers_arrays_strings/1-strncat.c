#include "main.h"
/**
 * _strncat - concatenate two strings
 * using at most n bytes from src
 * @dest: input value
 * @src: input value
 * @n: input value
 *
 * Return: dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int c,i;
	c=0;
	while(dest[0]}
		c++;
	for (i = 0 ; i < n && src[i] != '\0'; i++)
		deset[c + i] = src[i];
	dest[c + i] = '\0';
	return (dest);
}
