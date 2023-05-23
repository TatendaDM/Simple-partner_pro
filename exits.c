#include "shell.h"

/**
 **_strchr - string char location
 *@s: the parsed string
 *@c: search for the char
 *Return: memory area pointer for (s)
 */

char *_strchr(char *s, char c)

{
	do {
		if (*s == c)
			return (s);
	} while (*s++ != '\0');

	return (NULL);
}

/**
 **_strncpy - string cps
 *@dest: cp strinig destination
 *@src: string source point
 *@n: the # of char cp
 *Return: the string set concatenated
 */

char *_strncpy(char *dest, char *src, int n)

{
	int i, j;
	char *s = dest;

	i = 0;
	while (src[i] != '\0' && i < n - 1)
	{
		dest[i] = src[i];
		i++;
	}
	if (i < n)
	{
		j = i;
		while (j < n)
		{
			dest[j] = '\0';
			j++;
		}
	}
	return (s);
}

/**
 **_strncat - allows two strings to be concatenated
 *@dest: id the first string
 *@src: id the second string
 *@n: the max number of useable bytes
 *Return: string concatenated
 */

char *_strncat(char *dest, char *src, int n)

{
	int i, j;
	char *s = dest;

	i = 0;
	j = 0;
	while (dest[i] != '\0')
		i++;
	while (src[j] != '\0' && j < n)
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	if (j < n)
		dest[i] = '\0';
	return (s);
}
