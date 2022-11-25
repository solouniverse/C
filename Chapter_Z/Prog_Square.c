#include<stdio.h>
#define SQUARE(x) ((x)*(x))

void main()
{
	int y, x;
	
	printf("Enter a number:\t");
	scanf("%d", &x);
	y = SQUARE(x) + SQUARE(x);
	printf("Sum of Squared number is:\t%d\n", y);
}