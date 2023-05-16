#include<stdio.h>
int main(void){
	float total;
	int type,quantity;
	
	printf("Enter Burger Type :- ");
	scanf("%d",&type);
	printf("Enter Quantity :- ");
	scanf("%d",&quantity);
	
	while (0<type<=3){
		
		if(type==1){
			total=500.0*quantity;
		}		
		else if(type==2){
			total=550.0*quantity;
		}
		else{
			total=600.0*quantity;
		}
		
		printf("Total Price :- %.2f",total);
		
		printf("Enter your Burger Type :- ");
		scanf("%d",&type);
		printf("Enter your Quantity :- ");
		scanf("%d",&quantity);
		
	}
	
	
	
	
	return 0;
	
}
