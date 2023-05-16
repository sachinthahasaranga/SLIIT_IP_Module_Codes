#include<stdio.h>
int main(void){
	int marks;
	
	printf("enter your marks :-  ");
	scanf("%d",&marks);
	
	if(marks>=85){
		printf("A");
	}
	else if(marks>=50){
		printf("B");
	}
	else if(marks>=45){
		printf("C");
	}
	else {
		printf("F");
	}
	
	
	
	return 0;
	
	
	
}
