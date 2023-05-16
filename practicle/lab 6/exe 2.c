#include <stdio.h>
float calBonus(float basicSal);
int main(void)
{
	float salary, netSalary, bonusAmount;
	printf("Enter basic salary : ");
	scanf("%f", &salary);
	bonusAmount = calBonus(salary);
 	netSalary = salary + bonusAmount;
 
 	printf("Net salary : %.2f\n", netSalary);
	return 0;
}

float calBonus(float basicSal)//Function implementation
{
	float bonus;
	if(basicSal > 20000)
	{
		bonus = basicSal * 2;
	}
	else
		bonus = basicSal / 2;
	
	return bonus;
}

