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
int i;
for (i = 0; i < strlen(str); i++
_putchar(str[i]);
return (_strlen(str));
}

/**
 * count - counts integer
 *
 * @x: the integer to be counted
 * Return: always return 0
 *
 */
int count(int x)
{
int count = 0;
while (x != 0)
{
x = x / 10;
count++;
}
return (count);
}
/**
 * print_pos_int - prints integer
 *
 * @x: the integer to be printed
 * Return: always return 0
 *
 */
void print_pos_int(int x)
{
if (x != 0)
{
print_pos_int(x / 10);
putchar((x % 10) + '0');
}
}
