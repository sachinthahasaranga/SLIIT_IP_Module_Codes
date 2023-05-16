#include<stdio.h>
int main(void)
{
	int x;
	for(x=1;x<=10;x++){
		if(x==5){
			continue;
		}
		printf("%d, ",x);
	}
	
	return 0;	
}
