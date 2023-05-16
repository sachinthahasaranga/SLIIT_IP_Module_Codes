#include<stdio.h>
void stars(int side);
int main(void){
	
	int number;
	
	printf("Enter your number :-  ");
	scanf("%d",&number);
	
	stars(number);
	
	
	
}
void stars(int side){
	int x,y;
	
	for (x=1;x<=side;++x){
		for(y=1;y<=side;++y){
			printf("*");
		}
		printf("\n");
	}
	
	return;
}
