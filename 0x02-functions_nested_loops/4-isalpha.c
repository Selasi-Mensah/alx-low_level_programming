#include "main.h"
/**
 * _isalpha - checks if a character is an alphabet
 *
 * Return: 1 if charcter is letter,lowercase or uppercase, 0 others
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') ||
		(c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}
