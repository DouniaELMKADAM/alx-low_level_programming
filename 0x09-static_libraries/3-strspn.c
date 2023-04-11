#include "main.h"
<<<<<<< HEAD
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

unsigned int _strspn(char *s, char *accept)
{
    return strspn(s, accept);
=======

/**
* _strspn - get the length of sub-text
* of a prefix substring.
* @s: char array
* @accept: char array
* Return: break position
*/
unsigned int _strspn(char *s, char *accept)
{
	int letter;
	int pos = 0;

	while (s[pos])
	{
		for (letter = 0; accept[letter]; letter++)
		{
			if (accept[letter] == s[pos])
			{
				break;
			}
		}
		if (!accept[letter])
		{
			break;
		}
		pos++;
	}
	return (pos);
>>>>>>> d1230d0689b941f8fb1a9c46d3866cd2d65920b8
}
