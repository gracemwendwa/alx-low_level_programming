#include "main.h"

/**
 * _strstr - function to return first occurrence of the substring needle in the string haystack
 * @haystack: main, long string to be looked at
 * @needle: substring to be searched
 * Return: return 0 if no substring is not found otherwise return the substring  occurence
 */

char *_strstr(char *haystack, char *needle)
{
	char *str1, *str2;

	while (*haystack != '\0')
	{
		str1 = haystack;
		str2 = needle;

		while (*haystack != '\0' && *str2 != '\0' && *haystack == *str2)
		{
			haystack++;
			str2++;
		}
		if (*str2 == '\0')
			return (str1);
		haystack = str1 + 1;
	}
	return (0);
}
