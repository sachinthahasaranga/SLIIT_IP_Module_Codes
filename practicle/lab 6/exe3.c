#include<stdio.h>
float circleArea(float radius);
float circlePeri(float radius);
float recArea(float height,float width);

int main(void){
	
	float r,h,circlearea,circleperi,recarea,cylinder;
	printf("enter radius :-  ");
	scanf("%f",&r);
	printf("enter height  :-  ");
	scanf("%f",&h);
	
	circlearea=circleArea(r);
	circleperi=circlePeri(r);
	recarea=recArea(h,circleperi);
	
	cylinder=(2*circlearea)+(recarea);
	printf("cylinder area is   %.2f",cylinder);
	return 0;
	
}
float circleArea(float radius){
	float area;
	area=(22/7.0)*radius*radius;
	return area;
}
float circlePeri(float radius){
	float peri;
	peri=2*(22/7.0)*radius;
	return peri;
}
float recArea(float height,float width){
	float area;
	area=height*width;
	return area;
}
