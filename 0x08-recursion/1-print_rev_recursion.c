#include "main.h"
/**
 * _print_rev_recursion - Write a function that prints a string in reverse.
 * @a: This is my entry
 *
 */
void _print_rev_recursion(char *a)
{
	if (*a)
	{
		_print_rev_recursion(a + 1);
		_putchar(*a);
	}
}
