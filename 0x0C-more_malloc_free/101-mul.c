#include "main.h"
#include <stdio.h>


/**
 * _puts - prints a string, followed by a new line
 * @str: pointer to the string to print
 */
void _puts(char *str)
{
	while (*str)
	{
		putchar(*str);
		str++;
	}
	putchar('\n');
}

/**
 * _isdigit - checks if a character is a digit (0-9)
 * @c: character to check
 * Return: 1 if c is a digit, 0 otherwise
 */
int _isdigit(char c)
{
	return (c >= '0' && c <= '9');
}

/**
 * _atoi - convert a string to an integer
 * @s: pointer to the string to convert
 * Return: integer converted
 */
int _atoi(const char *s)
{
	int sign = 1;
	unsigned long int resp = 0, i = 0;

	while (s[i])
	{
		if (s[i] == '-')
		{
			sign *= -1;
		}
		else if (_isdigit(s[i]))
		{
			resp = resp * 10 + (s[i] - '0');
		}
		else
		{
			_puts("Error");
			exit(98);
		}
		i++;
	}
	return (sign * resp);
}

/**
 * main - multiplies two positive numbers
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: 0 on success, 98 on error
 */
int main(int argc, char *argv[])
{
	if (argc != 3 || !_isdigit(*argv[1]) || !_isdigit(*argv[2]))
	{
		_puts("Error");
		return (98);
	}

	int num1 = _atoi(argv[1]);
	int num2 = _atoi(argv[2]);
	int result = num1 * num2;

	printf("%d\n", result);

	return (0);
}
