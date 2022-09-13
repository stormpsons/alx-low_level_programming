nclude "0-putchar.c"
/**
 * main - Entry point

 * Return: Always 0 (Success)
 */
int main(void)
{
	char *sh = "Putchar";

	while (*sh)
	{
		_putchar(*sh);
		sh++;
	}
	_putchar('\n');

	return (0);
}

