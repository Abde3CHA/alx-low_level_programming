#include <stdio.h>

/**
 * main - Prints the alphabet.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char alphabet_start = 'a';
	char alphabet_end = 'z';

	for (char letter = alphabet_start; letter <= alphabet_end; letter++)
	{
		putchar(letter);
	}
	putchar('\n');
	return (0);
}
