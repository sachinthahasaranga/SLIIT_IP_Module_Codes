#include<stdio.h>
int main(void){
	char grade;
	
	printf("Enter your  grade:- ");
	scanf("%c",&grade);
	
	if (grade=='A'){
		printf("very good");
	}
	else if (grade=='B'){
		printf("good");
	}
	else if (grade=='C'){
		printf("satisfied");
	}
	else{
		printf("need to improve");
	}
	
	
	return 0;
	
}
