/* IT21194962
S.A.N. sachintha hasaranga niyangoda
group1.2
malabe*/

#include<stdio.h>
int main(void){
	float w,x,y,z;
	
	printf("Enter value for z:- ");
	scanf("%f",&z);
	printf("Enter value for y:- ");
	scanf("%f",&y);
	printf("Enter value for w:- ");
	scanf("%f",&w);
	
	
	x=w/((y*y)-(2*y*z));
	
	
	printf("value of x:- %.1f",x);
	
	return 0;
	
	
	
	
}
