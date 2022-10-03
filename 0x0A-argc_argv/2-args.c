#include <stdio.h>
#include "main.h"

/**
 * main - prints two arguments
 * @argc: parameter
 * @argv: array
 *
 * Return: 0 on success
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
