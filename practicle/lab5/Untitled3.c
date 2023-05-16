/*This is a sample C program to input integer numbers 
from the keyboard and display until user inputs -1*/
#include <stdio.h>
int main(void)
{
	int number;
	printf("Enter number : ");
	scanf("%d", &number);
	while(number != -1)
	{
		printf("%d\n", number);
		printf("Enter number : ");
		scanf("%d", &number);
	}
	return 0;
}

/* 2021/09/14


01. 0 times repetitions
02.	1 time  loop condition will be tested

*/
