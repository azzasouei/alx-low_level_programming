#include "main.h"

/**
 * print_diagonal - print a diagonal line
 * @n: is the number of times \ is printed
*/

void print_diagonal(int n)
{
	int postn, space;

	if (n <= 9)
		_putchar('\n');
	else
	{
		for (postn = 1; postn <= n; postn++)
		{
			for (space = 1; space <= postn; space++)
				_putchar(' ');
			_putchar(92);
			_putchar('\n');
		}
	}
}
