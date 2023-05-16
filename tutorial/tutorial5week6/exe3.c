#include<stdio.h>
int main(){
	float md1,md2,md3,md4,total=0,tempory,st1,st2,st3;
	int student=1,highest;
	
	while(student<=3){
		printf("Enter module 1 marks :-  ");
		scanf("%f",&md1);
		printf("Enter module 2 marks :-  ");
		scanf("%f",&md2);
		printf("Enter module 3 marks :-  ");
		scanf("%f",&md3);
		printf("Enter module 4 marks :-  ");
		scanf("%f",&md4);
	
		tempory=md1+md2+md3+md4;
		total=total+md1+md2+md3+md4;
		
		if(student==1){
			st1=tempory;
		}
		else if(student==2){
			st2=tempory;
		}
		else if(student==3){
			st3=tempory;
		}
	
		student++;
	
		tempory=0;
	}
	if(st1>st2){
		if(st1>st3){
			highest=1;
		}
	}
	else if(st2>st1){
		if(st2>st3){
			highest=2;
		}
		
	}
	else if(st3>st1){
		if(st3>st2){
			highest=3;
		}
		
	}
	
	
	printf("the highest total mark student :-  student %d\n",highest);
	printf("total marks :- %.2f",total);
	
	
	return 0;
}
