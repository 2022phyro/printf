#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdarg.h>
#include <unistd.h>
#include "main.h"


/**
 * _putchar - Prints a char
 *
 * @c: the character to be printed
 * Return: always return 0
 *
 */
int _putchar(char c)
{
return (write(1, &c, 1));
}

/**
 * _puts - prints a string
 *
 * @str: the string to be printed
 * Return: always return 0
 *
 */
int _puts(char *str)
{
int i, k;

k = _strlen(str);
for (i = 0; i < k; i++)
_putchar(str[i]);
return (k);
}

/**
 * count - counts integer
 *
 * @x: the integer to be counted
 * Return: always return 0
 *
 */
int count(int x, int n)
{
int count = 0;
while (x != 0)
{
x = x / n;
count++;
}
return (count);
}
/**
 * print_pos_int - prints integer
 *
 * @x: the integer to be printed
 * @n: the base
 * Return: always return 0
 *
 */
void print_pos_int(int x, int n)
{
if (x != 0)
{
print_pos_int((x / n), n);
putchar((x % n) + '0');
}
}
/**
 * print_int - prints an integer
 *
 * @y: the number to be printed
 * @z: the base
 * Return: the number of digits peinted
 */
int print_int(int y, int z)
{
	if (y > 0)
	{
		print_pos_int(y, z);
		return (count(y, z));
	}
	else if (y < 0)
	{
		_putchar('-');
		print_pos_int((-y), z);
		return (count((-y), z) + 1);

	}
	else
	{
		_putchar('0');
		return (1);
	}
}
