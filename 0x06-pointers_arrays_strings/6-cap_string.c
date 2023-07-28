#include "main.h"

/**
 * cap_string - Capitalizes all words of a string.
 * @str: The string to be capitalized.
 *
 * Return: A pointer to the changed string.
 */
char *cap_string(char *str)
{
	int i;
	int len = strlen(str);

	if (len > 0 && islower(str[0]))
	{
	str[0] = toupper(str[0]);
	}
	for (i = 1; i < len; i++)
	{
	if (str[i] == ' ' || str[i] == '\t' || str[i] == '\n' ||
	str[i] == ',' || str[i] == ';' || str[i] == '.' ||
	str[i] == '!' || str[i] == '?' || str[i] == '"' ||
	str[i] == '(' || str[i] == ')' || str[i] == '{' ||
	str[i] == '}')
	{
		if (islower(str[i + 1]))
		{
		str[i + 1] = toupper(str[i + 1]);
		}
	}
	}
return (str);
}
