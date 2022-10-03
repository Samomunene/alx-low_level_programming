#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - program that adds two positive numbers
 * print result followed by a new line
 * if no number is passed through the program, pront 0 followed by a new line
 * if one of the numbers contains a symbol that is not a digit, print Error
 * followed by a new line and return 1
 * @argc: parameter
 * @argv: array
 *
 * Return: 0 on success
 */

int main(int argc, char *argv[])
{
	int result = 0, num, i, j,k;

	for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[i][j] != '\0'; j++)
		{
			if (argv[i][j] > '9' || argv[i][j] < '0')
			{
				printf("%s\n", "Error");
				return (1);
			}
		}
	}
	for (k = 1; k < argc; k++)
	{
		num = atoi(argv[k]);
		result += num;
	}
	printf("%d\n", result);
	return (0);
}