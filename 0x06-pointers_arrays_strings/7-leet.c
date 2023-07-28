#include "main.h"
/**
 * leet - encode into 1337speak
 * @n: input value
 * Return: n value
 */
char *leet(char *n)
{
	int i, j;
	char replacements[5][2] = {{'a', '4'}, {'e', '3'}, {'o', '0'}, {'t', '7'}, {'l', '1'}};

	for (i = 0; i < strlen(str); i++)
	{
		for (j = 0; j < 5; j++)
		{
			if (str[i] == replacements[j][0])
			{
			str[i] = replacements[j][1];
			break;
			}
		}
	}

	return (str);
}
