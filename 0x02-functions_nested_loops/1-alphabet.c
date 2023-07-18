#include "main.h"

/**
 *print_alphabet - utilizes on the _putchar function to print
 *               the alphabet a - z
 *Return: 0 (Success)
*/

int print_alphabet(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
	{
		putchar(letter);
	}
	putchar('\n');
	return (0);
}
