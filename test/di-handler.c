#include <stdio.h>
#include <stdarg.h>
/**
* custom_printf - Custom printf function.
* @format: Format string with optional conversion specifiers.
* @...: Variable number of arguments.
* Return: The number of characters printed (excluding the null byte used to end output to strings).
*/
int custom_printf(const char *format, ...)
{
va_list args;
va_start(args, format);
int count = 0;
while (*format != '\0') 
{
if (*format == '%' && (*(format + 1) == 'd' || *(format + 1) == 'i'))
{
int num = va_arg(args, int);
count += printf("%d", num);
format++;  // Skip the 'd' or 'i' in the format string
}
Else
{
putchar(*format);
count++;
}
format++;
}
va_end(args);
return (count);
}
