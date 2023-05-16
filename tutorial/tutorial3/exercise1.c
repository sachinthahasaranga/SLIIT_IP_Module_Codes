#include<stdio.h>
int main(void){
	float r,d,s,a; //r=radius , d=diameter ,s=circumference, a=area
	
	printf("Enter radius:-  ");
	scanf("%f",&r);
	
	d=2*r;
	s=2.0*22/7*r;
	a=22.0/7*r*r;
	
	printf("\n\ndiameter = %.2f \ncircumference = %.2f \narea = %.2f",d,s,a);
	
	
	
	
	
	
	return 0;
	
}
