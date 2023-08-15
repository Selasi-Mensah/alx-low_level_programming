#include "main.h"
/**
 * print_last_digit - Prints the last digits of a number
 *
 * Return: Value of the last digit of number
 */
int print_last_digit(int q)
{
	int last;
	last = q % 10;
	if (last < 0)
	{
		last = last * -1;
	}
	_putchar(last + '0');
	return (last);
}
