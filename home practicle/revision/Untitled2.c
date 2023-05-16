#include<stdio.h>
float calpayment(int type,float weight,char delivery);
int main(){
	int types;
	float weights;
	char deliverys;
	
	printf("enter type : ");
	scanf("%d",&types);
	printf("enter weight : ");
	scanf("%f%*c",&weights);
	printf("do you want to delivery : ");
	scanf("%c%*c",&deliverys);
	
	printf("%.2f",calpayment(types,weights,deliverys));
	
	
	return 0;
}
float calpayment(int type,float weight,char delivery){
	float payment;
	if (type==1){
		payment=(weight*750.00);
	}
	else if (type==2){
		payment=(weight*500.00);
	}
	else if (type==3){
		payment=(weight*350.00);
	}
	
	if (delivery=='Y'||delivery=='y'){
		payment=payment+1000;
		
	}
	return payment;
}
