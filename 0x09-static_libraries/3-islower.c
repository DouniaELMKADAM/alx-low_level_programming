#include "main.h"
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
}
