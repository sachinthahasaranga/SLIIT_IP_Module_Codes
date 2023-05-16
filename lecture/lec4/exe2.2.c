#include<stdio.h>
int main(void){
	int marks;
	
	printf("enter your marks :-  ");
	scanf("%d",&marks);
	
	switch(marks){
		
		case (marks>=85): printf("A");
		break;
		case marks>=50: printf("B");
		break;
	}
	
	
	
	return 0;
	
	
	
}
