#include <stdio.h>

/**
  * main - program that prints all possible different combinations of two digits
   * Numbers must be separated by ,followed by a space
    * The two digits must be different
       * Return: Always 0 (Success)
   */
int main(void)
{
	int i, s;
	i = 48;
	s = 48;

	while (e < 58)
	{
		i = 48;
		while (i < 58)
		{
			if (e != i && e < i)
			{
				putchar(e);
				putchar(i);
				if (i == 57 && e == 56)
				{
					break;
				}
				putchar(',');
				putchar(' ');
			}
			i++;
		}
		e++;
	}
	putchar('\n');
	return (0);
}
