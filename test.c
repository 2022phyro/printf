#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdarg.h>
#include <unistd.h>
int _putchar(char c)
{
        return (write(1, &c, 1));
}
void print_int(int x)
{
        if (x != 0)
        {
                print_int(x / 10);
                putchar((x % 10) + '0');
        }
}

void _puts(char *str)
{
        int i;
        for (i = 0; i < strlen(str); i++)
                _putchar(str[i]);
}
void find_case(char s);


int _printf(const char *s, ...)
{
        int (*func)(void *);
        char *st;
        st = strdup(s);
        va_list wayo;
        int i;
        va_start(wayo, s);
        i = 0;
        while (st[i] != '\0')
        {
                if (st[i] == '%')
                {
                        switch (st[i + 1])
        {
                case 'd':
                        print_int(va_arg(wayo, int));
                break;

                case 'i':
                        print_int(va_arg(wayo, int));
                break;
                case 'c':
                        _putchar(va_arg(wayo, int));
                break;
                case 's':
                        _puts(va_arg(wayo, char*));
                        break;
                default:
                        _putchar(s[i + 1]);
        }
        i++;
                }
                else //if (!(st[i - 1] == '%'))
                _putchar(st[i]);
                i++;
        }
        return (0);
}

int main()
{
        int a = 2;
        _printf("hello  2%% my guy  %s is%d, %c", "hello my mananenst man->", 5 * 3, 'm');
       printf("\nhello  2%% my guy  %s is%d, %c", "hello my mananenst man->", 5 * 3, 'm');

        return 0;
}

