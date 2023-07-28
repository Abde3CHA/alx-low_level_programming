#include "main.h"
#include <stdio.h>

/**
 * rot13 - encoder rot13
 * @s: pointer to string params
 *
 * Return: *s
 */
char *rot13(char *str)
{
	int i, j;
	char alphabet[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char rot13Alphabet[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (i = 0; str[i] != '\0'; i++)
	{
	int inAlphabet = 0;

	for (j = 0; j < strlen(alphabet); j++)
	{
		if (str[i] == alphabet[j])
		{
			inAlphabet = 1;
			break;
		}
	}
	if (inAlphabet)
	{
	int index = j;

	str[i] = rot13Alphabet[index];
	}
	}
	return (str);
}
