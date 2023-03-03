#include "main.h"

/**
 * string_toupper - changes all lowercase letters of a string
 * to uppercase
 * @ptr: input string.
 * Return: the pointer to dest.
 */

char *string_toupper(char *ptr)
{
	int i;
	char *ptr;

	while ((*ptr + i) != '\0')
	{
		if ((*(ptr + i) >= 97) && (*(ptr + i) <= 122))
			*(ptr + i) = (*(ptr + i) - 32);
		i++;
	}
	return (ptr);
}
