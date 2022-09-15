#include "main.h"
/**
 *_isupper - function that verifies if a  character is uppercase or not
 *@c: tested character
 *Return: returns 1 if it is uppercase , 0 if not
 */

int _isupper(int c)

{
	if ((c >= 'A') && (c <= 'Z'))
printf("%c: %d\n", c, _isupper(c));
	{
		return (1);
	}

	return (0);
}

