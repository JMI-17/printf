#include "main.h"
#include <stdio.h>
#include <stdarg.h>
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
va_start(args, format);
while (*format != '\0') {
if (*format == '%') {
format++;
switch (*format) {
case 'c':
count += putchar(va_arg(args, int));
break;
case 's':
count += printf("%s", va_arg(args, char *));
break;
case '%':
count += putchar('%');
break;
default:
putchar('%');
count++;
break;
}
} else {
putchar(*format);
count++;
}
format++;
}
va_end(args);
return (count);
}
