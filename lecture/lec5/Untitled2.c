#include<stdio.h>
int main(void){
	
	float marks,average,total;
	
	printf("enter your marks :-  ");
	scanf("%f",&marks);
	
	while(marks!=-1){
		printf("enter your marks :-  ");
		scanf("%f",&marks);
		
		total=total+marks;
		
		
		
	}
	average=total/10.0;
	
	printf("average marks is %.2f",average);
	return 0;
	
	
	
	
	
}
