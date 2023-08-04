#include <stdio.h>
#include <stdlib.h>

/**
 * main- print sum of 2 numbers
 * @argc: number of commandline arguments
 * @argv: pointer to an array of command line argument
 * Return: 0 succes , not 0 fails
*/

int main(int argc, char *argv[])
{
	int sum;

	if (argc == 3)
	{
		sum = atoi(argv[1]) * atoi(argv[2]);
		printf("%d\n", sum);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}
