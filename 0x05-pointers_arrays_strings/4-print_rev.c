#include "main.h"

/**
 * print_rev - print string in revers
 * @s: input string
 * Return: No return value
 */

void print_rev(char *s)
{
	int count = 0;

	while (count >= 0)
	{
		if (s[count] == '\0')
			break;
		count++;
	}

	for (count--; count >= 0; count--)
		putchar(s[count]);
	putchar('\n');
}
