//sachintha hasaranga It21194962
#include<stdio.h>
#include<assert.h>
int qualityPoint(float average);	//function qualityPoint declaration
int main(){	//function main begin program execution
	float staverage;
	
	assert(qualityPoint(92)==4);	//check qualityPoint function is correct
	assert(qualityPoint(85)==3);
	assert(qualityPoint(78)==2);
	assert(qualityPoint(63)==1);
	assert(qualityPoint(52)==0);
	
	assert(qualityPoint(100)==4);
	assert(qualityPoint(90)==4);
	assert(qualityPoint(89)==3);
	assert(qualityPoint(80)==3);
	assert(qualityPoint(79)==2);
	assert(qualityPoint(70)==2);
	assert(qualityPoint(69)==1);
	assert(qualityPoint(60)==1);
	
	printf("Enter average :- ");	//prompt
	scanf("%f",&staverage);	//read float to staverage
	
	printf("Your quality point is %d",qualityPoint(staverage));//invoke qualityPoint function and print quality point  
	
	
	return 0;
	
	
}//end main function
int qualityPoint(float average){	//function qualityPoint implementation
	
	if (average<=100&&average>=90){		//if average between 100 and 90 return 4
		return 4;
	}//end if condiction
	else if(average<=89&&average>=80){	//if average between 89 and 80 return 3
		return 3;
	}//end else if condiction
	else if(average<=79&&average>=70){	//if average between 79 and 70 return 2
		return 2;
	}//end else if condiction
	else if(average<=69&&average>=60){	//if average between 60 and 69 return 1
		return 1;
	}//end else if condiction
	else {	//if average lessthan 60 return 0
		return 0;
	}//end else condiction
	
}//end function qualitypoint
