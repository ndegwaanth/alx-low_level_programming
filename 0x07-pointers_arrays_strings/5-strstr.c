#include "main.h"
/**
 * _strstr - locates a substring
 * @haystack: The string where the substring is being searched
 * @needle: substring to be search
 * Return: pointerat beginning of located substring if not return null
 */
char *_strstr(char *haystack, char *needle)
{
	int m;

	m = 0;

	if (*needle == 0)
	{
		return (haystack);
	}
	while (*haystack)
	{
		if (haystack[m] == needle[m])
		{
			do {
				if (needle[m + 1] == '\0')
				{
					return (haystack);
				}
				m++;
			} while (haystack[m] == needle[m]);
		}
		haystack++;
	}
	return ('\0');
}
