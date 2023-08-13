#include <stdio.h>
/**
 * main - prints sizes
 * Return: 0 if rightly exited
 */
	int main(void)
{
	printf("size of a char: %d bytes\n", sizeof(char));
	printf("size of an int: %d bytes\n", sizeof(int));
	printf("size of a long int: %d bytes\n", sizeof(long int));
	printf("size of a long long int: %d bytes\n", sizeof(long long int));
	printf("size of float: %d bytes\n", sizeof(float));
	
	return (0);
}
