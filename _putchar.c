#include <unistd.h>
/*
 * _putchar - function to return character to stdout
 */

 int_putchar(char c)
{
 	return (write(1, &c, 1));
}
