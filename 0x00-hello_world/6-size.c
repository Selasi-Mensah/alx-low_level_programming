#include <stdio.h>
/**
 * main - prints sizes
 * Return: 0 if rightly exited
 */
	int main(void)
{
	printf("size of int: %zu bytes\n",sizeof(int));
	printf("size of char: %zu bytes\n",sizeof(char));
	printf("size of float: %zu bytes\n",sizeof(float));
	printf("size of double: %zu bytes\n",sizeof(double));

	return (0);

