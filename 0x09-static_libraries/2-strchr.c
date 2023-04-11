#include "main.h"
<<<<<<< HEAD
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

char *_strchr(char *s, char c)
{
    return strchr(s, c);
=======

/**
*_strchr - print match
*@s: array
*@c: char
*
*Return: char return
*/
char *_strchr(char *s, char c)
{
	int i = 0;

	while (s[i] != 0)
	{
		if (s[i] == c)
			return (&s[i]);
		i++;
	}
	if (s[i] == c)
		return (&s[i]);
	return ('\0');
>>>>>>> d1230d0689b941f8fb1a9c46d3866cd2d65920b8
}
