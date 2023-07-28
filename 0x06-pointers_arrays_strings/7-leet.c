#include "main.h"
/**
 * leet - encode into 1337speak
 * @n: input value
 * Return: n value
 */
char *leet(char *n)
{
	int i;
	char replacements[] = "443071";
	char targetChars[] = "aeotlAEOTL";

	for (i = 0; i < strlen(targetChars); i++)
	{
		for (int j = 0; j < strlen(str); j++)
		{
			if (str[j] == targetChars[i])
			{
			str[j] = replacements[i];
			}
		}
	}
	return (str);
}
