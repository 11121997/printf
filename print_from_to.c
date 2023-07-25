#include "main.h"
#include <string.h>

/**
 * print_from_to - prints charachters from start withouth except until stop
 * @start: a pointer to strat
 * @except: a pointer to continue
 * @stop: a pointer to stop
 * Return: number of charcters printed
 */



int print_from_to(char *start, char *stop, char *except)
{
	int count = 0;

	while (*start && start < stop)
	{
		if (except == NULL || strchr(except, *start) == NULL)
		{
			_putchar(*start);
			 count++;
		}
		start++;
	}
	return (count);
}
