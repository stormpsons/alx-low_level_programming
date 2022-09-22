#include "main.h"

/**
*string_toupper - function that changes all lowercase letter*of a string to uppercase.
*@ch: Pointer to Char
*Return: char.
*/
char *string_toupper(char *str)
{
int index = 0;

while (str[index++])
{
if (str[index] >= 'a' && str[index] <= 'z')
str[index] -= 32;
}

return (str);
}
