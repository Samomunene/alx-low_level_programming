#include <stdio.h>
#include "main.h"

/**
 * main - Print out the name
 * @argc: argc parameter
 * @argv: array of command listed
 *
 * Return: 0 on success
 */

int main(int argc _attribute_((unused)), char *argv[])
{
	printf("%s\n", *argv);
	return (0);
}
