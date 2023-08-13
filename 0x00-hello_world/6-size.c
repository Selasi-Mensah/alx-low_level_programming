#include <stdio.h>
/**
 * main - prints sizes
 * Return: 0 if rightly exited
 */
	int main(void)
{
	printf("size of int: %d bytes\n",sizeof(int));
	printf("size of char: %d bytes\n",sizeof(char));
	printf("size of float: %d bytes\n",sizeof(float));
	printf("size of double: %d bytes\n",sizeof(double));

	return (0);
}
