#include "main.h"
<<<<<<< HEAD
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

int _isalpha(int c)
{
    return isalpha(c);
=======
/**
 * _isalpha - a function that checks for alphabetic character
 * @c: parameter of letter input
 * Return: 1 is a letter, 0 if not
 */
int _isalpha(int c)
{
if (((c >= 'a') && (c <= 'z')) || ((c >= 'A') && (c <= 'Z')))
return (1);
else
return (0);
>>>>>>> d1230d0689b941f8fb1a9c46d3866cd2d65920b8
}
