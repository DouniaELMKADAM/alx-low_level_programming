#include "main.h"
<<<<<<< HEAD
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

int _isdigit(int c)
{
    return isdigit(c);
=======

/**
 * _isdigit - determines if input is a digit
 *
 * @c: int to examine
 *
 * Return: 1 if digit, 0 otherwise
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
>>>>>>> d1230d0689b941f8fb1a9c46d3866cd2d65920b8
}
