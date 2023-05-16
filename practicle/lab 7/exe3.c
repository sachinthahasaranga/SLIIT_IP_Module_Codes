#include<stdio.h>
#include<assert.h>
float calPayment(char type);
float calDiscount(int age);
void testDiscount();
int main(void){
	char type;
	int age;
	float discount,total;
	
	testDiscount();
	
	printf("enter package type (s,c,h) :-  ");
	scanf("%c",&type);
	printf("enter age :-  ");
	scanf("%d",&age);
	
	discount=((calPayment(type))*(calDiscount(age)));
	total=(calPayment(type))-discount;
	printf("Net amount :- %.2f",total);
	
	
}
float calPayment(char type){
	float payment;
	
	if (type=='s'||type=='S'){
		payment=15000.0;
	}
	else if (type=='c'||type=='C'){
		payment=50000.0;
	}
	else if (type=='h'||type=='H'){
		payment=30000.0;
	}
	
	return payment;
}
float calDiscount(int age){
	if (age>=60){
		return 0.1;
	}
}
void testDiscount(){
	
	assert((calDiscount(60))==0.1);
}
