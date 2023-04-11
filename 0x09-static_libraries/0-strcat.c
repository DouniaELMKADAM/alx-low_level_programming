#include "main.h"
<<<<<<< HEAD
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

char *_strcat(char *dest, char *src)
{
    return strcat(dest, src);
}

=======
/**
 * _strcat - concat two
 * @dest: first string
 * @src: second string
 * Return: concatenated string
 */
char *_strcat(char *dest, char *src)
{
	int cpt = 0;
	int cpt2 = 0;

	while (*(dest + cpt))
	{
		cpt++;
	}
	while (*(src + cpt2))
	{
		*(dest + cpt) = *(src + cpt2);
		cpt++;
		cpt2++;
	}
	*(dest + cpt) = '\0';
	return (dest);
}
>>>>>>> d1230d0689b941f8fb1a9c46d3866cd2d65920b8
