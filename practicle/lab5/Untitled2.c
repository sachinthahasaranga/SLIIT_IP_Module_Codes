#include <stdio.h>
int main(void)
{
	int count = 1;
	while(count <= 20)
	{
		printf("%d\t", count);
		count+=2;
	}
	return 0;
}

/*
01.		1,3,5,7,9,11,13,15,17,19,21
02.		11 times while loop will be checked during the execution of program
*/
