#include<stdio.h>
int main(void){
	
	float numbers,average,total;
	
	printf("enter your numbers :-  ");
	scanf("%f",&numbers);
	
	while(numbers<=9999){
		printf("enter your numbers :-  ");
		scanf("%f",&numbers);
		
		total=total+numbers;
		
		
		
	}
	average=total/10.0;
	
	printf("average marks is %.2f",average);
	return 0;
	
	
	
	
	
}
