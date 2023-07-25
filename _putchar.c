#include "main.h"

/**
*_putchar - writes the characters to stdout
@c: the charcter to pint
*return: on succcess 1 error -1 and ero is set appropriately
*/
int _putchar(char c)
{
	return (write(1, &c,  1));
}
