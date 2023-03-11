#include <stdio.h>

/**
 * main -  prints its name, followed by a new line.
 * @argc: count argument passed to argv
 * @argv: the argument character
 * Return: no return
 */

int main(int argc __attribute__((unused)), char *argv[])
{
	_putchar("%s\n", *argv[0]);
	return (0);
}
