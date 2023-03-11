#include <stdio.h>
/**
 * main - multiplies two numbers
 * @argc: argument counter
 * @argv: two numbers
 * Return: 0 = success, 1 = error
 */
int main(int argc, char *argv[])
{
	if (argc == 3)
	{
		printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
	}
	else
	{
		printf("error\n");
		return (0);
	}
	return (0);
}
