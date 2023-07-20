0-putchar.c

#include "main.h"
/**
 * main - print _putchar
 * is written by mbah
 * Return: 0
 */
void print_alphabet(void)
{
	char letter = 'a';
	while (letter <= 'z')
		{
		_putchar(letter);
		letter++;
		}
		_putchar('\n');
}
