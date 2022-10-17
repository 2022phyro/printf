#include "main.h"
#include <stdarg.h>
#include <stdio.h>
#include <string.h>
int _printf(const char *s, ...)
{
	char *st;
	int i;
	va_list way;
	va_start(way, s);
	st = strdup(s);
	while (st[i] != '\0')
	{
		if (st[i] == '%')
		{
			;
		}
		else if (st[i - 1] == '%')
		{
			switch (st[i])
			{
				case 'd':
					print_int((va_arg(way, int)), 10);
					break;
				case 'i':
					print_int((va_arg(way, int)), 10);
					break;
				case 's':
					_puts(va_arg(way, char *));
					break;
				case 'c':
					_putchar(va_arg(way, int));
					break;
				case '%':
					_putchar('%');
					break;
				default:
					break;
			}
		}
		else
			_putchar(st[i]);
		i++;
	}
	va_end(way);
	return (0);
}
