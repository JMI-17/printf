#include <stdarg.h>
#include <stdio.h>
#include "main.h"
/**
* _printf - a function that produces output according to a format.
* @ format - to produce output
* Returns: the number of characters printed
*/
int _printf(const char *format, ...){
va_list args;
int count = 0;  // Declaration moved to the beginning
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
