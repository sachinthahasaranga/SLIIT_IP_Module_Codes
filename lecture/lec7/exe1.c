#include<stdio.h>

int main(void){
	
	int marks[5];
	int total,i;
	
	for (i=0;i<5;i++){
		
		printf("enter marks %d :- ",i+1);
		scanf("%d",&marks[i]);
	}
	
	for(i=0;i<5;i++){
		total=total+marks[i];
	}
	
	
	printf("total is :- %d",total);
	
	
	
	
	return 0;
}
