_printf
.SH SYNOPSIS
#include <printf.h>
.br
int _printf(const char *restrict format, ...)
.SH OPTIONS
.IP \--help
this brings out the help options and rhe man page
.IP \--h
short format of the above
.br
display the man page
.SH DESCRIPTION
This is a C function that is designed to mimick the printf function in action
.br
.TP
It prints out its variables in the specified format. The format is specified by a format specified, all enclosed in a string framework example:
.br
_printf("This is the number %d", 5)

.LP
Here, % is the marker while 'd' is the specifier, telling us how
.br
to print '5'
.SS Format Specifiers
All data types to be printed must be included in the arguments and its position to be
.br
printed in the string constant is found with the '%' sign. The followinf letters
.br
.SS The Common Format Specifiers
.TP
The letters below denote different data types:
.br
d       an integer
.br
c       a char
.br
f       a float
.br
s       a string
.br
.SH RETURN VALUE
_printf returns a value of the number of charcters printed, excluding the nullbyte used to end the output string
.SH EXAMPLES
Using our _printf to print a string
.br

#include <stdio.h>
.br
#include "_printf.h"
.br
#include <string.h>
.br
int main()
.br
{
.br
        char *test = "Hello printf";

        _printf("The value of s is %s", test);
.br
        return (0);
.LP
}
.br
.SH BUGS
The whole function is experimental and as such we have not accounted for every case.
.br
There may be undefined behaviour in certain cases
.SH SEE ALSO
_puts, printf(1), scanf(3), puts(3)
.UR
.SH COPYRIGHT
This maa page is part of the proect work of the ALX SE curriculum with respect to the
.br
creation of a function, similar to printf.
.SH AUTHORS
THe above man page was created by Sikiru JImoh and Ugwuanyi Afam on
.br
16th October, 2022.


