#include "main.h"

/**
 * print_rot13 - Handles conversion specifier "R" (rot13)
 * @ap: va_list containing the argument
 * @params: pointer to the parameters struct
 *
 * Return: Number of characters printed.
 */
int print_rot13(va_list ap, params_t *params)
{
	int i;
	char *str;

	char shift13[52] = {'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w',
	'x', 'y', 'z', 'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k',
	'l', 'm',
	'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z', 'A',
	'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M'};
	char letters[52] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j',
	'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x',
	'y', 'z',
	'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N',
	'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z'};

	mk_buffer buffer;
	init_buffer(&buffer);

	str = va_arg(ap, char *);

	while (*str)
	{
for (i = 0; letters[i]; i++)
{
	if (*str == letters[i])
	{
add_to_buffer(&buffer, shift13[i]);
break;
	}
}
if (!letters[i])
	add_to_buffer(&buffer, *str);

str++;
	}

	return (flush_buffer(&buffer));
}

