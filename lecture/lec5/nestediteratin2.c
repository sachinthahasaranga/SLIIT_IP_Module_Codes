#include<stdio.h>
int main(void)
{
	int x,y;
	for(x=1;x<=5;x++){
		for(y=1;y<=x;y++){
			printf("%d",y);
		}
		printf("\n");
	}
	
	return 0;	
}

/*output 
1
12
123
1234
12345 */
