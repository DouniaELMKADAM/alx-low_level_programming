#include "main.h"
<<<<<<< HEAD
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

char *_memset(char *s, char b, unsigned int n)
{
    return memset(s, b, n);
=======

/**
* _memset - fill memory .
* @s: pointer
* @b: hexadecimal number
* @n: n bytes
* Return: pointer
*/
char *_memset(char *s, char b, unsigned int n)
{
	unsigned char *u = (unsigned char *) s;

	while (n-- > 0x00)
	{
		*u++ = b;
	}
	return (s);
>>>>>>> d1230d0689b941f8fb1a9c46d3866cd2d65920b8
}
