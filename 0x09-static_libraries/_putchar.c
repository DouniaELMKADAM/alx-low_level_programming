<<<<<<< HEAD
#include "main.h"
#include <stdio.h>
#include <stlib.h>
#include <ctype.h>
#include <string.h>

int _putchar(char c)
{
	return putchar(c);
=======
#include <unistd.h>

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
>>>>>>> d1230d0689b941f8fb1a9c46d3866cd2d65920b8
}
