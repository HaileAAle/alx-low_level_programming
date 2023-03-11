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
	if (argc < 1)
		printf("0\n");
	while (argv++)
		printf("%d\n", argc);
	return (0);
}
