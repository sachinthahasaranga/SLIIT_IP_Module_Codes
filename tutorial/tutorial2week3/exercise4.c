#include<stdio.h>
struct iteam {
	//exercise 4.1
	int iteamno;
	double price;	
	int quantity;
}it1,it2;
	
//exercise 4.2
int main(void){
	printf("enter Iteam No: ");	 //prompt
	scanf("%d",&it1.iteamno);	//read an integer
	
	printf("enter price: ");	//prompt
	scanf("%lf",&it1.price);	//read a double
	
	printf("enter quantity: ");	 //prompt
	scanf("%d",&it1.quantity);	//read an integer
	
	printf("enter Iteam No: ");	 //prompt
	scanf("%d",&it2.iteamno);	//read an integer
	
	printf("enter price: ");	 //prompt
	scanf("%lf",&it2.price);	//read a double
	
	printf("enter quantity: ");	 //prompt
	scanf("%d",&it2.quantity);	//read an integer
	
	
	//print outputs
	printf("Iteam No \tPrice \tQuantity \n\t%d \t%.2f \t\t%d \n\t%d \t%.2f \t\t%d\n",it1.iteamno,it1.price,it1.quantity,it2.iteamno,it2.price,it2.quantity);
	
	
	return 0;
	
}
