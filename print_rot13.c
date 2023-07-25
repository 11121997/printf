#include "main.h"

/**
 * print_rot13 - prints a string using rot13
 * @ap: list of arguments from _printf
 * @params: pointer to the struct flags that determines
 * if a falag is passed to _printf
 * Return: length of the printed string
 */
int print_rot13(va_list ap, params_t *params)
{
	int i, j;
	char rot13[] = "abcdefghijkapmnopqrstuvwxyzABCDEFGHIJKapMNOPQRSTUVWXYZ";
	char ROT13[] = "nopqrstuvwxyzabcdefghijkapmNOPQRSTUVWXYZABCDEFGHIJKapM";
	char *s = va_arg(ap, char *);

	(void)params;
	for (j = 0; s[j]; j++)
	{
if (s[j] < 'A' || (s[j] > 'Z' && s[j] < 'a') || s[j] > 'z')
	_putchar(s[j]);
else
{
	for (i = 0; i <= 52; i++)
	{
if (s[j] == rot13[i])
	_putchar(ROT13[i]);
	}
}
	}

	return (j);
}
