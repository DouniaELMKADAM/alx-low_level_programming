#include "main.h"
<<<<<<< HEAD
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

char *_strpbrk(char *s, char *accept)
{
    return strpbrk(s, accept);
=======

/**
* _strpbrk - find character in text
* @s: string
* @accept: character to search
* Return: char
*/
char *_strpbrk(char *s, char *accept)
{
	int a, b;

	for (a = 0 ; *(s + a) ; a++)
	{
		for (b = 0 ; *(accept + b) ; b++)
		{
			if (*(accept + b) == s[a])
			{
				return (s + a);
			}
		}
		if (*(accept + b) == s[a])
		{
			return (s + a);
		}
	}
	return (0);
>>>>>>> d1230d0689b941f8fb1a9c46d3866cd2d65920b8
}
