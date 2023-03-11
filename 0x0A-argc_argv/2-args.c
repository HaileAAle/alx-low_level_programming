#include <stdio.h>

/**
 * main - prints the number of arguments passed into it.
 * @argc: number of arguments
 * @argv:argument array
 * Return: 0 success
 */

int main(int argc, char *argv[])
{
	int a;

	for (a = 0; a < argc; a++)
		pritf("%s\n" argv[a]);
	return (0);
}
