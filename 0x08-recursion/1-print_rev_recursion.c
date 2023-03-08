#include "main.h"

/**
 * _print_rev_recursion - prints a string in reverse.
 * @s: the string
 * Return: no return
 */

void _print_rev_recursion(char *s)
{
	int count = 0;

	if (*(s[count]) != '\0')
	{
		_putchar(*(s[count]));
		_print_rev_recursion(*(s[count - 1]));
	}
}
