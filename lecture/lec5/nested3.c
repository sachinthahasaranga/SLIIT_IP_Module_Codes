#include<stdio.h>
int main(void)
{
	int x,y;
	for(x=1;x<=5;x++){
		for(y=1;y<=x;y++){
			printf("%d",x);
		}
		printf("\n");
	}
	
	return 0;	
}

/*output 
1
22
333
4444
55555 */
