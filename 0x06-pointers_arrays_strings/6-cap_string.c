#include "main.h"
#include <stdio.h>

/**
*cap_string - function that capitalize first character of a word
*@str: string to capitalize
*Return:returns the capitalized string
*/
char *cap_string(char *str)
{
int index = 0;

int cspc = 13;

char spc[] = {32, '\t', '\n', 44, ';', 46, '!', '?', '"', '(', ')', '{', '}'};

while (s[a])
{
	i = 0;
	while (i < cspc)
	{
		if ((a == 0 || s[a - 1] == spc[i]) && (s[a] >= 97 && s[a] <= 122))
			s[a] -= 32;
		i++;
	}
	a++;
}
return (s);
}
