#include<stdio.h>
#include<math.h>
struct center{
	float x;
	float y;
}c1,c2;
int main(){
	c1.x=100;
	c1.y=12;
	c2.x=20;
	c2.y=22;
	
	float distance;
	
	distance=sqrt(pow((c1.x-c2.x),2) + pow((c1.x-c1.x),2));
	
	printf("%.2f",distance);
	
	return 0;
}
