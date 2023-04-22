<<<<<<< HEAD
#include <unistd.h>
=======
#include "main.h"

>>>>>>> 00e64f57c87339d4d77b1b4da1c700400720e043
/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
<<<<<<< HEAD
		return (write(1, &c, 1));
=======
	return (write(1, &c, 1));
}


/**
 * _puts - prints a string to stdout
 * @str: pointer to the string to print
 * Return: number of chars written
 */
int _puts(char *str)
{
	register short i;

	for (i = 0; str[i]; i++)
		_putchar(str[i]);
	return (i);
>>>>>>> 00e64f57c87339d4d77b1b4da1c700400720e043
}
