#include <stdio.h>

/**
 * main - prints the number of arguments passed into it.
 * @argc: number of arguments
 * @argv:argument array
 * Return: 0 success
 *
 */

int main(int argc, char *argv[])
{
	while (argv++)
		printf("%d\n", argc - 1);
	return (0);
}
