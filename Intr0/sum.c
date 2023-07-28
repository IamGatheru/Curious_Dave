
/**
 * WAP to input two numbers fro the keyboard and 
 * print their sum.
 */
#include <stdio.h>
#include <stdlib.h>

int main(int argv, char *argc[])
{
	int a,b, sum;

	puts("This program calculates the sum of two numbers entered by the user.");
	puts("Enter two numbers:");

	scanf("%d %d", &a, &b);

	sum = a + b; //Initially, this line was right before the first puts function.
		     //The program produced an error.

	printf("The sum of %d and %d is : %d ", a, b, sum);

	return 0;
}


