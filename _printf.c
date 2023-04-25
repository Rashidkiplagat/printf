#include <stdarg.h>
#include <stdio.h>
#include "main.h"

/**
 * _printf - produces output according to a format
 * @format: format string containing the characters and the specifiers
 * Description: this function will call the get_print() function that will
 * determine which printing function to call depending on the conversion
 * specifiers contained into fmt
 * Return: length of the formatted output string
 */
int _printf(const char *format, ...)
{
    int count = 0;
    va_list args;
    va_start(args, format);
    while (*format != '\0') {
        if (*format == '%') {
            format++;
            if (*format == 'c') {
                char c = (char) va_arg(args, int);
                putchar(c);
                count++;
            } else if (*format == 's') {
                char *str = va_arg(args, char *);
                fputs(str, stdout);
                count += strlen(str);
            } else if (*format == '%') {
                putchar('%');
                count++;
            }
        } else {
            putchar(*format);
            count++;
        }
        format++;
    }
    va_end(args);
    return count;
}
