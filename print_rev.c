#include "main.h"
#include <stdarg.h>

/**
 * print_rev - prints a string in reverse
 * @ap: the argument pointer
 * @params: the parametrs struct
 * Return: number of bytes printed
 */

int print_rev(va_list ap, params_t *params)
{
	char *str = va_arg(ap, char *);
	int i, len = 0;

	if (!str)

		str ="(null)";
	for (i = 0; str[i]; i++)
		len++;
	if ((int)params->width > 0) {
	int padding = params->width - len;
	while (padding > 0) {
		_putchar(' ');
		padding --;
	}
	}
	for (i = len - 1; i >= 0; i--)
		_putchar(str[i]);
	if ((int)params->width < 0) {
	int padding = -params->width - len;
	while (padding > 0)
	{
		_putchar(' ');
                padding --;
	}
	}
	return (len);
}
