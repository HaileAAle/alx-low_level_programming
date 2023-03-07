#include "main.h"

/**
 *
 *
 *
 *
 *
 *
 */

char *_strstr(char *haystack, char *needle)
{
	unsigned int i, j;

	while (i > 0)
	{
		if (*(haystack + i) == *(needle + i))
			break;
			return (haystack + i);
	}
	return ('\0');
}
