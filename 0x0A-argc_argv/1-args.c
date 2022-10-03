#include <stdio.h>
#include "main.h"

/**
 * main - prints number of arguments passed on it
 * @argc: argc parameter
 * @argv: array of command listed
 *
 * Return: 0 on success
 */

int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}
