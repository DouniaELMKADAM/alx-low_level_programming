#include "main.h"
<<<<<<< HEAD
#include <stdio.h>
#include <stlib.h>
#include <ctype.h>
#include <string.h>

int _islower(int c);
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
=======
/**
 * _islower - check if alphabet is lowercase
 * @c: parameter of letter input
 * Return: 1 or 0
 */

int _islower(int c)
{
if (c >= 'a' && c <= 'z')
return (1);
else
return (0);
>>>>>>> d1230d0689b941f8fb1a9c46d3866cd2d65920b8
}
