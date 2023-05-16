#include<stdio.h>
int main(void){
	int total,n=1;
	float marks,average;
	
	while(n<=10){
		printf("enter your marks :-  ");
		scanf("%f",&marks);
		
		total=total+marks;
		n=n+1;
		
		
	}
	average=total/10.0;
	
	printf("average marks is %.2f",average);
	return 0;
	
	
	
	
	
}
