#include "main.h"

/**
 * rot13 - encodes a string using rot13
 * @s: input string.
 * Return: the pointer to dest.
 */

char *rot13(char *s)
{
	int i = 0;
	int j;

	while (*(s + i) != '\0')
	{
		if ((*(s + i) >= 97) && (*(s + i) <= 109))
		{
			*(s + i) = *(s + i) + 13;
			i++;
		}
		for (j = 0; j < 13; j++)
		{
			if ((*(s + i) >= 109) && (*(s + i) <= 122))
				*(s + i) = 97 + j;
			i++;
			j++;
		}
	}
	return (s);
}
