#include "main.h"
/**
*cap_string - function that capitalize first character of a word
*@str: string to capitalize
*Return:returns the capitalized string
*/
char *cap_string(char *str)
{
int index = 0;

while (*(s + i) != '\0')
{
	if (i == 0 && (*(s + i) >= 97 && *(s + i) <= 122))
	{
		*(s + i) = *(s + i) - ' ';
		i++;
	}
	if (*(s + i) == ' ' || *(s + i) == '\n' || *(s + i) == '\t'
			|| *(s + i) == ',' || *(s + i) == ';' || *(s + i) == '!'
			|| *(s + i) == '?' || *(s + i) == '"' || *(s + i) == '('
			|| *(s + i) == ')' || *(s + i) == '{' || *(s + i) == '}'
			|| *(s + i) == '.')
	{
		i++;
		if (*(s + i) >= 97 && *(s + i) <= 122)
		{
			*(s + i) = *(s + i) - ' ';
		}
	}
	else
		i++;
}
return (s);
}
