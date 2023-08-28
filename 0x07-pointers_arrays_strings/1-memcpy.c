#include "main.h"
/**
 * _memcpy - copies n bytes from memory area src
 * to memory area destination
 * @dest: From pointer to destination
 * @src: pointer to source string
 * @i: number of bytes to be copied
 *
 * Return: pointer to dest
 */
char *_memcpy(char *dest,char *src,unsigned int n)
{
	for (unsigned int i = 0; i < n; i++)
		dest [i] = src [i];

	return (dest);
}

