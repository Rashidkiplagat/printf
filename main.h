#ifndef MAIN_H
#define MAIN_H
<<<<<<< HEAD
#include <stdarg.h>
#include <stdio.h>
#include <unistd.h>

#define UNUSED(x) (void)(x)
#define BUFF_SIZE 1024

/* FLAGS */
#define F_MINUS 1
#define F_PLUS 2
#define F_ZERO 4
#define F_HASH 8
#define F_SPACE 16

/* SIZES */
#define S_LONG 2
#define S_SHORT 1

/**
 * struct fmt - Struct op
 *
 * @fmt: The format.
 * @fn: The function associated.
 */
struct fmt
{
	char fmt;
	int (*fn)(va_list, char[], int, int, int, int);
};


/**
 * typedef struct fmt fmt_t - Struct op
 *
 * @fmt: The format.
 * @fm_t: The function associated.
 */
typedef struct fmt fmt_t;
=======

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
>>>>>>> 97605d942f544f20861516e8039d76f9ee5a553b

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
<<<<<<< HEAD
int handle_print(const char *fmt, int *i,
va_list list, char buffer[], int flags, int width, int precision, int size);

/****************** FUNCTIONS ******************/

/* Funtions to print chars and strings */
int print_char(va_list types, char buffer[],
	int flags, int width, int precision, int size);
int print_string(va_list types, char buffer[],
	int flags, int width, int precision, int size);
int print_percent(va_list types, char buffer[],
	int flags, int width, int precision, int size);

/* Functions to print numbers */
int print_int(va_list types, char buffer[],
	int flags, int width, int precision, int size);
int print_binary(va_list types, char buffer[],
	int flags, int width, int precision, int size);
int print_unsigned(va_list types, char buffer[],
	int flags, int width, int precision, int size);
int print_octal(va_list types, char buffer[],
	int flags, int width, int precision, int size);
int print_hexadecimal(va_list types, char buffer[],
	int flags, int width, int precision, int size);
int print_hexa_upper(va_list types, char buffer[],
	int flags, int width, int precision, int size);

int print_hexa(va_list types, char map_to[],
char buffer[], int flags, char flag_ch, int width, int precision, int size);

/* Function to print non printable characters */
int print_non_printable(va_list types, char buffer[],
	int flags, int width, int precision, int size);

/* Funcion to print memory address */
int print_pointer(va_list types, char buffer[],
	int flags, int width, int precision, int size);

/* Funciotns to handle other specifiers */
int get_flags(const char *format, int *i);
int get_width(const char *format, int *i, va_list list);
int get_precision(const char *format, int *i, va_list list);
int get_size(const char *format, int *i);

/*Function to print string in reverse*/
int print_reverse(va_list types, char buffer[],
	int flags, int width, int precision, int size);

/*Function to print a string in rot 13*/
int print_rot13string(va_list types, char buffer[],
	int flags, int width, int precision, int size);

/* width handler */
int handle_write_char(char c, char buffer[],
	int flags, int width, int precision, int size);
int write_number(int is_positive, int ind, char buffer[],
	int flags, int width, int precision, int size);
int write_num(int ind, char bff[], int flags, int width, int precision,
	int length, char padd, char extra_c);
int write_pointer(char buffer[], int ind, int length,
	int width, int flags, char padd, char extra_c, int padd_start);

int write_unsgnd(int is_negative, int ind,
char buffer[],
	int flags, int width, int precision, int size);

/****************** UTILS ******************/
int is_printable(char);
int append_hexa_code(char, char[], int);
int is_digit(char);

long int convert_size_number(long int num, int size);
long int convert_size_unsgnd(unsigned long int num, int size);

#endif /* MAIN_H */
=======

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
>>>>>>> 97605d942f544f20861516e8039d76f9ee5a553b
