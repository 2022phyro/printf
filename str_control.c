#include <stdlib.h>
#include "main.h"
#include <stdio.h>
#include <stdarg.h>
#include <unistd.h>

/**
 * *_strdup - this function mimicks the strcpy c using malloc.
 *
 * @str: the string to be copied
 * Return: a pointer to the copy
 */
char *_strdup(char *str)
{
	char *p;
	int i, j;

	if (str == NULL)
	{
		return (NULL);
	}

	for (i = 0; *(str + i) != '\0'; i++)
		;

	p  = malloc(sizeof(*p) * (i + 1));

	if (p == NULL)
	{
		return (NULL);
	}

	for (j = 0; *(str + j) != '\0'; j++)
	{
		*(p + j) = *(str + j);
	}
	*(p + j) = '\0';

	return (p);
	free(p);
}
/**
 * _strlen - it swaps the values of two integers
 * Description:'A function'
 * @s: the string to be checked
 * Return: The lenght of the string
 */
int _strlen(const char *s)
{
	int i, lenght;

	lenght = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		lenght++;
	}
	return (lenght);
}
/**
 * _memcpy - Copies the memory address of a pointer
 * @dest: the destination
 * @src: the source memory area for copying
 * @n: the limit
 * Description:'A function mimicking the original memcpy in c'
 * Return: dest if successful
 */
char *_memcpy(char *dest, const char *src, int n)
{
	int i;

	for (i = 0; i < n; i++)
	dest[i] = src[i];
	return (dest);
}
/**
 * *dupstring - duplicates a constant string
 *
 * @org: the string to be duplicated
 * Return: a pointer to the duplicated string
 */
char *dupstring(const char *org)
{
	int org_size;
	static char *dup;
	char *dup_offset;

	org_size = _strlen(org);
	dup = (char *)malloc(sizeof(char) * org_size + 1);
	if (dup == NULL)
		return ((char *)NULL);
	dup_offset = dup;
	while (*org)
	{
		*dup_offset = *org;
		dup_offset++;
		org++;
	}
	*dup_offset = '\0';

	return (dup);
}

