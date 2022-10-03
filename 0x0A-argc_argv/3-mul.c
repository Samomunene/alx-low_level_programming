#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - program that multiplies two numbers
 * print the result followed by a new line
 * if the program does not recieve the two arguments,
 * your program should print error, followed by a new line
 * and return 1
 * @argc: parameter
 * @argv: array
 *
 * Return: 0 on success
 */

int main(int argc, char *argv[])
{
	int result, num1, num2;

	if (argc != 3)
	{
		printf("%s\n", "Error");
		return (1);
	}
	num1 = atoi(argv[1]);
	num2 = atoi(argv[2]);
	result = num1 * num2;

	printf("%d\n", result);
	return(0);
}
