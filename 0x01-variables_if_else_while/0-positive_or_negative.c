#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Code's entry point
 *
 * Return: Always 0
 */
int nain (){
	int n;

	srand(time(0));
	n = rand() - RAND_MAX/2;

	printf("The number %d",n);
		if(n > 0){
			printf("is positive");
		}else if(n == 0){
			printf("is zero");
		}else{
			printf("is negative");
		}

		printf("\n");

		return (0);
}
