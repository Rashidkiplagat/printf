#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>

/* mandatory functions */
int _printf(const char *format, ...);

/* Task 0 */
int _putchar(char c);

/* Task 1 */
int print_char(va_list args);
int print_string(va_list args);
int print_percent(va_list args);

/* Task 2 */
int print_integer(va_list args);
int print_decimal(va_list args);

/* Task 3 */
int print_unsigned(va_list args);
int print_octal(va_list args);
int print_hexadecimal(va_list args);
int print_HEX(va_list args);

/* Task 4 */
int _printf(const char *format, ...);

/* Task 5 */
int print_string_uppercase(va_list args);

/* Task 6 */
int print_address(va_list args);

/* Task 7 */
int print_integer_positive(va_list args);
int print_integer_space(va_list args);
int print_hexadecimal_lower_case(va_list args);

/* Task 8 */
int print_long(va_list args);
int print_short(va_list args);
int print_unsigned_short(va_list args);
int print_unsigned_long(va_list args);
int print_unsigned_long_long(va_list args);

/* Task 9 */
int print_integer_width(va_list args, int width);
int print_char_width(va_list args, int width);
int print_string_width(va_list args, int width);

/* Task 10 */
int print_integer_precision(va_list args, int precision);
int print_decimal_precision(va_list args, int precision);
int print_octal_precision(va_list args, int precision);
int print_hexadecimal_precision(va_list args, int precision);
int print_HEX_precision(va_list args, int precision);
int print_string_precision(va_list args, int precision);

/* Task 11 */
int print_integer_zero_flag(va_list args, int width);
int print_decimal_zero_flag(va_list args, int width);
int print_octal_zero_flag(va_list args, int width);
int print_hexadecimal_zero_flag(va_list args, int width);
int print_HEX_zero_flag(va_list args, int width);

/* Task 12 */
int print_integer_left_flag(va_list args, int width);
int print_decimal_left_flag(va_list args, int width);
int print_octal_left_flag(va_list args, int width);
int print_hexadecimal_left_flag(va_list args, int width);
int print_HEX_left_flag(va_list args, int width);

/* Task 13 */
int print_reverse(va_list args);

/* Task 14 */
int print_rot13(va_list args);

#endif /* main.h */
