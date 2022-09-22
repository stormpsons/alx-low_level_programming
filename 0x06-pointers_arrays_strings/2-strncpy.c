#include "main.h"
#include <stdio.h>
#include <string.h>
/**
*_strncpy - C function that copies a string, including the
*terminating null byte, using at most an inputted number of bytes.
*If the length of the source string is less than the maximum byte number,
*the remainder of the destination string is filled with null bytes.
*Works identically to the standard library function `strncpy`.
*@dest: buffer storing the string copy
*@src:the source string
*@n:max nummber of byte copied
*Return:returns
*/
char *_strncpy(char *dest, char *src, int n)
{	
int a = 0, b = 0;

while (src[b])
{
	b++;
}
while (a < n && src[a])
{
	dest[a] = src[a];
	a++;
}
while (a < n)
{
	dest[a] = '\0';
	a++;
}
return (dest);
}
