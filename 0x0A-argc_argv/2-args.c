#include <stdio.h>

/**
 * main - prints the number of arguments passed into it.
 * @argc: number of arguments
 * @argv:argument array
 * Return: 0 success
 */

int main(int argc, char *argv[])
{
	int count;

	for (count = 0; count < argc; count++)
		pritf("%s\n" argv[count]);
	return (0);
}
