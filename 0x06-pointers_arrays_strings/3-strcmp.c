#include "main.h"

/**
 * _strcmp - compaire two string
 * @s1: the first string
 * @s2: the second string
 * Return: value
 *
 */

int _strcmp(char *s1, char *s2)
{
	int i;

	for (i = 0; ((*(s1 + i) = '\0)' && (*(s2 + i) = '\0')); i++)
	
		break;
	return ((*(s1 + i)) - (*(s2 + i)));
}
