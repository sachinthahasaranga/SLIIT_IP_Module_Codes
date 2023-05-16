#include <stdio.h>
int main(void)
{
	int values[10] = {25, 32, 45, 2, 13, 9, 6, 10, 17, 4};
	int key, i;
	printf("Enter search key : ");
	scanf("%d", &key);
	for(i = 0; i < 10; i++) 
	{
		if(key == values[i])
		{
			printf("Index no. : %d\n", i);
			return -1; //Terminate the program execution
		}
	}
	printf("Value not found\n");
	return 0;
}
