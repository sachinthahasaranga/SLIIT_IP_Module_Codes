//IT21194962 Sachintha hasaranga
#include<stdio.h>
#define salespeople 4
#define product 5
int main(){
	float sales[salespeople][product]={0};	//sales array declaration
	int i,j;	//variable for count
	int number,pnum;	//variable for read user input
	float total;		//variable for calculate total
	
	//assign user input to sales array
	for (i=0;i<salespeople;i++){	
		printf("enter sales person number(1-4) : ");	//prompt
		scanf("%d",&number);	//read an integer for number variable
		for(j=0;j<product;j++){
			printf("enter product number(1-5) : ");	//prompt
			scanf("%d",&pnum);	//read an integer for pnum variable
			printf("enter  total dollar value of product : ");	//prompt
			scanf("%f",&sales[number-1][pnum-1]);	//read a float for sales array
			
		}printf("\n");//new line
	}//end for loop
	
	//print total of each froduct
	for(i=0;i<product;i++){
		total=0;	//assign total to 0
		for(j=0;j<salespeople;j++){
			total=total+sales[j][i];	//calculate total
		}
		printf("product %d total is %.2f\n",i+1,total);	//print total values of each product
	}//end for loop
	
	
	return 0;
}//end main function
