#include<stdio.h>

float calculateIncrement(int grade, float basicSalary);
float calcTotSalary(float salary, float increment);
int main(){
	float increment, salary,total;
	int grade;
	
	printf("Enter your salary : ");
	scanf("%f",&salary);
	printf("Enter your grade : ");
	scanf("%d",&grade);
	
	
	increment=calculateIncrement(grade,salary);
	total=calcTotSalary(salary,increment);
	
	printf("increment : %.2f \nTotal Salary : %.2f",increment,total);
	
	
	return 0;

}
float calculateIncrement(int grade, float basicSalary){
	float increment=0;
	
	if (grade==1){
		increment=basicSalary*10/100;
	}
	else if (grade==2){
		increment=basicSalary*15/100;
	}
	else if (grade==3){
		increment=basicSalary*20/100;
	}
	else{
		printf("invalid grade type");
		
		
	}
	return increment;
}
float calcTotSalary(float salary, float increment){
	return salary+increment;
}
