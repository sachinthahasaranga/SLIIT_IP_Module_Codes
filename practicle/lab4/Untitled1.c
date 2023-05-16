#include<stdio.h>
int main(){
	int a1,a2,a3,total;
	
	printf("enter your angle:-  ");
	scanf("%d",&a1);
	
	printf("enter your angle:-  ");
	scanf("%d",&a2);
	
	printf("enter your angle:-  ");
	scanf("%d",&a3);
	
	
	total=a1+a2+a3;
	
	if(total==180){
		printf("this can be formed");
	}
	else{
		printf("this can't' be formed");	
	}
	
	return 0;
	
	
	
}
