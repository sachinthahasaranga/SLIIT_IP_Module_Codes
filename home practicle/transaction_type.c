#include<stdio.h>
#include<assert.h>

int calculator(int number1, int number2, char function); //function decleration
void testing();
int main (void)
{
	
	int num1, num2;
	char fun;
	int total;
		
		testing();
		
		printf("Enter number 1 -");
		scanf("%d%*c", &num1);
	
		printf("Enter number 2 -");
		scanf("%d%*c", &num2);
		
		printf("Enter function - ");
		scanf("%c%*c", &fun);
		
		
		total = calculator(num1, num2, fun);
		
		printf("Total is %d", total);
		return 0;
}
int calculator(int number1, int number2, char function){
	int total;
	switch (function){
			case  '+' : total=number1+number2;
			break;
			case  '-' : total=number1-number2;
			break;
			case  '*' : total=number1*number2;
			break;
			case '/' : total=number1/number2;
			break;
			return total;
		} 
}
void testing(){
	assert(fabs(calculator(20,25,'+')-45)<=0.01);
}
