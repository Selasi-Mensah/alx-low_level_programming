#include "main.h"
/**
 * _strlen_recursion - Write a function that returns the length of a string.
 * @a: This is the input string
 *
 * Return: Result is the length of the string
 */
int _strlen_recursion(char *a)
{
	if (*a == '\0')
		return (0);
	return (_strlen_recursion(a +1) + 1);
}
