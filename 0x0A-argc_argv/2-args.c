#include <stdio.h>

/**
 * main - prints the number of arguments passed into it.
 * @argc: number of arguments
 * @argv:argument array
 * Return: 0 success
 */

int main(int argc, char *argv[])
{
	while (argc--)
		pritf("%s\n" *argv++);
	return (0);
}
