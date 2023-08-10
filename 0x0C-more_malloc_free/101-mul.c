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
 * _is_positive_number - checks if a string is composed of digits and positive
 * @s: pointer to the string to check
 * Return: 1 if s is a positive number, 0 otherwise
 */
int _is_positive_number(char *s)
{
	while (*s)
	{
		if (!_isdigit(*s))
		{
			return 0;
		}
		s++;
	}
	return 1;
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

	if (*s == '-')
	{
		sign = -1;
		s++;
	}

	while (*s)
	{
		if (!_isdigit(*s))
		{
			_puts("Error");
			exit(98);
		}
		resp = resp * 10 + (*s - '0');
		s++;
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
	if (argc != 3 || !_is_positive_number(argv[1]) || !_is_positive_number(argv[2]))
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
