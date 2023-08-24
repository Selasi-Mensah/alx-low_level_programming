#include "main.h"

/**
 * _strcat - concatenates the strings pointed by @SRC to
 * the end of the string pointed by @dest
 * @dest: String that will be appended
 * @src: String to be concatenated
 *
 * Return: returns pointer to @dest
 */
char *_strcat(char *dest, char *src)
{
    char *ptr = dest;    
    while (*ptr != '\0') 
    {
        ptr++;
    }
    while (*src != '\0') 
    {
        *ptr = *src;
        ptr++;
        src++;
    }
    
    *ptr = '\0';
    
    return (dest);
}
