#include "main.h"
<<<<<<< HEAD
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

char *_memcpy(char *dest, char *src, unsigned int n)
{
    return memcpy(dest, src, n);
=======

/**
* _memcpy - copy memory area.
* @dest: copied
* @src: original
* @n: limit
* Return: pointer
*/
char *_memcpy(char *dest, char *src, unsigned int n)
{
	char *b = src;
	char *a = dest;

	while (n != 0)
	{
	*a++ = *b++;
	n--;
	}

	return (dest);
>>>>>>> d1230d0689b941f8fb1a9c46d3866cd2d65920b8
}
