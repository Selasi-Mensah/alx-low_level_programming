#include "main.h"
/**
 * _puts_recursion - write a function that prints a string, followed by a new line.
 *
 * @a: This is the input string
 */

void _puts_recursion(char *a)
{
	if (*a == '\0')
	{
		_putchar('\n');
		return;
	}
	_putchar(*a);
	a++;
	_puts_recursion(a);
}
