#include "main.h"
/**
*_strspn - search the number of bytes in the initial
* segment of s which consist only of bytes from accept
*@s:segment targeted
*@accept:reference bytes container
*
*Return:returns the number of bytes in the initial
* segment of s which consist only of bytes from accept
*/
unsigned int _strspn(char *s, char *accept)
{
	unsigned int count = 0;
	int found;

	while (*s != '\0')
    {
	found = 0;
	for (int i = 0; accept[i] != '\0'; i++)
	{
		if (*s == accept[i])
		{
			found = 1;
			break;
		}
	}
	if (found == 0)
	{
		return count;
	}
	count++;
	s++;
    }
	return count;
}
