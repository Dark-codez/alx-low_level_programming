#include "main.h"

/**
 * print_most_numbers - Print numbers from 0 - 9
 * do not print 2 and 4
 * followed by a new line
 * Return: 0
 */
void print_most_numbers(void)
{
	int i = '0';

	for (; i <= '9'; i++)
	{
		if (i != '2' && i != '4')
		_putchar(i);
	}
	_putchar('\n');
}