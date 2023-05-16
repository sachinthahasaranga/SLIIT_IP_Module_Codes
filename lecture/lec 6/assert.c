#include<stdio.h>
#include<assert.h>

int max(int x,int y);
int main(void){
	int nu1,nu2;
	
	printf("enter number");
	scanf("%d",&nu1);
	printf("enter number");
	scanf("%d",&nu2);
	
	assert (max(50,20)==50);
	assert (max(20,40)==40);
	assert (max(80,10)==80);
	
	printf("max number is %d",max(nu1,nu2));
	
	return 0;
}
int max(int x, int y){
	if (x>y){
		return x;
	}
	else{
		return y;
	}
}

