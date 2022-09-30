#include "main.h"
#include <stdio.h>

/**
 * main - program that prints all arguments it receives
 * @argc: number of arguments
 * @argv: the vector that hold the argument
 * Return: 0, it's void
 */

int main(int argc, char **argv)
{
	int night = 0;

	while (night++ < argc)

		printf("%s\n", *argv++)

			return (0);
}
