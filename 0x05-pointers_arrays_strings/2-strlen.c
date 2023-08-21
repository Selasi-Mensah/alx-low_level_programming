#include "main.h"
/**
  * _strlen - Returns the length of a string
  * @s: String to count
  *
  * Return: String length
  */
int _strlen(char *s)
{
	int length = 0;
	while (*s != '\0'){
		length++;
		s++;
	}
	return length;
}

