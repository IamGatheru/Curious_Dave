/**
 * This Program input two numbers from the keyboard and print their average
 */
#include <stdio.h>
#include <stdlib.h>

int main(int argv,char* argc[])
{
	int a, b, average;

	puts("Enter two integers:");
	scanf(" %d %d", &a, &b);

	average = (a+b)/2;
	printf("%d", average);

	return 0;
}




