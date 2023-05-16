//sachintha hasaranga It21194962
#include<stdio.h>
#include<assert.h>
#include<math.h>
double hypotenuse(double side1,double side2);	//function hyponenuse declaration
void testHypotenuse();//function testHypotenuse declaration

int main(void){
	double tside1,tside2;	//variables
	
	testHypotenuse();	//invoke testHypotenuse function
	
	
	printf("enter side1 :- ");	//prompt
	scanf("%lf",&tside1);		//read double to tside1 variable
	
	printf("enter side1 :- ");	//prompt
	scanf("%lf",&tside2);	//read double to tside2 variable
	
	printf("side 3 is :- %.2f",hypotenuse(tside1,tside2));	//invoke hypotenuse function and print side 3 value
	
	
	
	
}//end function main
double hypotenuse(double side1,double side2){	//function hyponenuse implementation
	
	double side3;
	
	side3=(side1*side1)+(side2*side2); //assign side3 value
	side3= sqrt(side3);
	return side3;	//return side3 value
}//end function hyponenuse
void testHypotenuse(){	//function testHyponenuse implementation
	
	assert(fabs(hypotenuse(3.0,4.0)-5.0)<=0.01);
	assert(fabs(hypotenuse(5.0,12.0)-13.0)<=0.01);	//check hypotenuse function is correct
	assert(fabs(hypotenuse(8.0,15.0)-17.0)<=0.01);
}//end function testHyponenuse

