#include "main.h"
#include <unistd.h>
#include <stdlib.h>
#include <stdarg.h>
#include <stdio.h>
#include <string.h>
/**
* _printf - Custom printf function.
* @format: Format string with optional conversion specifiers.
*
* Return: The number of characters printed (excluding the null byte used to end output to strings).
*/
int _printf(const char *format, ...)
{
va_list args;
int count = 0;
int char_printed;
va_start(args, format);
while (*format != '\0')
{
if (*format == '%')
{
format++;
switch (*format)
{
case 'c':
{
char c = va_arg(args, int);
char_printed = write(1, &c, 1);
break;
}
case 's':
{
char *str = va_arg(args, char *);
char_printed = write(1, str, strlen(str));
break;
}
case '%':
char_printed = write(1, "%", 1);
break;
default:
char_printed = write(1, "%", 1);
count++;
break;
}
count += char_printed;
}
else
{
write(1, format, 1);
count++;
}
format++;
}
va_end(args);
return (count);
}
