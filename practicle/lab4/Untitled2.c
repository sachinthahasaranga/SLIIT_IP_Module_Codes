#include<stdio.h>
int main(){
	char shape;
	float area, w,l,b,h,r;
	
	printf("enter shape:- ");
	scanf("%c",&shape);
	
	if(shape=='R'){
		printf("enter width:- ");
		scanf("%f",&w);
		printf("enter lenth:- ");
		scanf("%f",&l);
		
		area=w*l;
		
		printf("area = %.2f ",area);}
	
	else if(shape=='T'){
		printf("enter base:- ");
		scanf("%f",&b);
		printf("enter height:- ");
		scanf("%f",&h);
		
		area=b*(h/2.0);
		
		printf("area = %.2f ",area);
	}
	
	else if(shape=='C'){
		printf("enter radius:- ");
		scanf("%f",r);
		
		area=22/7.0*r*r;
		
		printf("area = %.2f ",area);
	}
	
	else{
		printf("invalid character!!!!!!!!");
	}	
	
	return 0;
}
