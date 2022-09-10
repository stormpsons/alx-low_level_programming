#include <stdio.h>

/**
  * main - program that prints all possible different combinations of two digits
   * Numbers must be separated by ,followed by a space
    * The two digits must be different
       * Return: Always 0 (Success)
   */
int main(void)
{
		int i;
			int j;

			for (i = 48; i < 57; i++)
					{
								for (j = i + 1; j < 58; j++)
											{
															putchar(i);
																		putchar(j);
																					if (i != 56 || j != 57)
																									{
																														putchar(',');
																																		putchar(' ');
																																					}
																							}
									}
				putchar('\n');
					return (0);
}
