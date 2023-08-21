#include "main.h"

/**
  * _strcpy - Copy a string
  * @dest: Destination value
  * @src: Source value
  *
  * Return: the pointer to dest
  */
char *_strcpy(char *dest, char *src)
{
	char*original_dest = dest;
	
	while(*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
		dest = '\0';
		return (original_dest);
}
