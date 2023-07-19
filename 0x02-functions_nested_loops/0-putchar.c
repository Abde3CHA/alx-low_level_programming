#include <stdio.h>

/**
 * main - print _putchar
 * is written by mbah
 * Return: 0
 */

int main()
{
	char string[] = "_putchar";
	for (int i = 0; i < sizeof(string); i++)
	{
		putchar(string[i]);
	}
	putchar('\n');

	return (0);
}
