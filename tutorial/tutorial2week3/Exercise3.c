#include<stdio.h>
int main(void){
	
	int marks1, marks2,total;
	float average;		//exercise 3.1
	
	printf("Enter marks 1 : ");	//prompt
	scanf("%d",&marks1);		//read an integer
	printf("Enter marks 2 : "); //prompt
	scanf("%d",&marks2);		//read an integer
	
	printf("marks 1= %d \nmarks 2= %d\n",marks1,marks2);
	//exrecise 3.2
	total=marks1+marks2; //assign total marks
	printf("total= %d\n",total);	//print total
	
	//exercise 3.3
	average=(marks1+marks2)*1.00/2;	//assign average
	//exercise 3.4	
	printf("average marks= %.2f\n",average);	//print sum	
	
	return 0;
	
}
