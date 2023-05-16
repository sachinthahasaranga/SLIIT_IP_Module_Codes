#include<stdio.h>
int main(){
	float total=0,netamount=0,discount=0;
	char size,dis1,dis2,dis3;
	int type=0,num;
	
	
	do{
		printf("input pizza type: ");
		scanf("%d%*c",&type);
		if(type==-1){
			break;
		}	
		while(type!=1&&type!=2){
			printf("invalid type \n");
			printf("input pizza type(1 or 2): ");
			scanf("%d%*c",&type);
		}
		if(type==-1){
			break;
		}
		
		printf("input pizza size (L or M): ");
		scanf("%c%*c",&size);
		while(size!='l'&&size!='L'&&size!='M'&&size!='m'){
			printf("invalid size\n");
			printf("input pizza size (L or M): ");
			scanf("%c%*c",&size);
		}
		
		printf("input the number of pizza: ");
		scanf("%d%*c",&num);
		
		if (type==1&&(size=='L'||size=='l')){
			total=total+(1720.00*num);
		}
		else if(type==1&&(size=='M'||size=='m')){
			total=total+(975.00*num);
		}
		else if(type==2&&(size=='L'||size=='l')){
			total=total+(1820.00*num);
		}
		else if(type==2&&(size=='M'||size=='m')){
		total=total+(1000.00*num);
		}
		
		printf("\n");
		
	}while(type!=-1);
	
	printf("\nAre you paying by credit card (Y/N) ? ");
	scanf("%c%*c",&dis1);
	printf("Are you a loyalty customer (Y/N) ? ");
	scanf("%c%*c",&dis2);
	printf("Is this an online oder (Y/N) ? ");
	scanf("%c%*c",&dis3);
	
	if(dis1=='y'||dis1=='Y'){
		discount=total*20/100;
	}
	else if(dis2=='Y'||dis2=='y'){
		discount=total*15/100;
	}
	else if(dis3=='Y'||dis3=='y'){
		discount=total*5/100;
	}
	else{
		discount=0;
	}
	
	netamount=total-discount;
	printf("\nTotal bill amount : %.2f",total);
	printf("\nDiscount : %.2f",discount);
	printf("\nNet amount : %.2f",netamount);
	
	
	return 0;
}
