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
	int count;

	for (count = 1; count < argc; count++)
		printf("%d\n", count);
	return (0);
}
