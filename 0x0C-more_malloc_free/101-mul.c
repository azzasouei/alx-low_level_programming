#include "main.h"
/**
 * _puts - prints a string, followed by new line
 * @str: pointer to string to print
*/

void _puts(char *str)
{
	while (*str)
	{
		_putchar(*str);
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
 *@s: char type string
 *Return: integer converted
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
 * main - prints the result of multiplication, followed by a new line
 * @argc: int
 * @argv: list
 * Return: 0 on success, 98 on error
 */
int main(int argc, char const *argv[])
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
