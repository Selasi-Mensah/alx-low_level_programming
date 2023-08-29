#include "main"
/**
  *_strchr - locates a character in a string.
  *@s: pointer to string.
  *@c: character to be found.
  *
  *Return: pointer to first occurence of the character.
  *or null if character is not found.
  */
char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; (s[i] != c) && (s[i] != '\0'); i++);
	
		if(s[i] == c)
		return (s + i);
		else
		return (NULL);
}
