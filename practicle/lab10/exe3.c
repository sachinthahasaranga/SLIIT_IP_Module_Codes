#include<stdio.h>
int main(){
	char type,name[20];
	float amount;
	float balance,total;
	int count=1,accnumber,nic,i,c=1,useraccnumber;
	
	FILE*acc;
/*	acc=fopen("account.txt","w");
	if (acc==NULL){
		printf("this file can not open ");
		return -1;
	}
	for(i=0;i<count;i++){
		printf("enter account number : ");
		scanf("%d",&accnumber);
		printf("enter NIC no : ");
		scanf("%d",&nic);
		printf("enter customer name : ");
		scanf("%s",name);
		printf("enter account balance : ");
		scanf("%f",&balance);
		
		fprintf(acc,"%d\t%d\t%s\t%.2f\n",accnumber,nic,name,balance);
	}	
	fclose(acc);
*/	
	printf("Enter your account number : ");
	scanf("%d%*c",&useraccnumber);
	
	FILE*trans;
	trans=fopen("transaction.txt","w");
	if (trans==NULL){
		printf("this file can not open ");
		return -1;
	}
	total=0;
	while(c>0){
		printf("enter tranaction type (D/W): ");
		scanf("%c%*c",&type);
		if (type!='D'&&type!='W'){	//enter other letter to exit
			break;
		}
		printf("enter amount: ");
		scanf("%f%*c",&amount);
		
		fprintf(trans,"%c\t%f\n",type,amount);
		
	}
	fclose(trans);
	
	
	
	
	trans=fopen("transaction.txt","r");
	if (trans==NULL){
		printf("this file can not open ");
		return -1;
	}
	total=0;
	fscanf(trans,"%c%*c%f\n",&type,&amount);
	while(!feof(trans)){
		if(type=='D'){
			total=total+amount;
		}
		else if(type=='W'){
		total=total-amount;
		}
	fscanf(trans,"%c%*c%f",&type,&amount);	
	}
	fclose(trans);
	
	
	
	
	acc=fopen("account.txt","r");
		if (acc==NULL){
		printf("this file can not open ");
		return -1;
	}
	fscanf(acc,"%d%d%*c%s%f",&accnumber,&nic,name,&balance);
	while(!feof(acc)){
		if (accnumber==useraccnumber){
			balance=balance+total;
			printf("\naccount number : %d\n",useraccnumber);
			printf("balance is : %.2f\n",balance);
			break;
		}
		
		fscanf(acc,"%d%d%*c%s%f",&accnumber,&nic,name,&balance);	
	}
	
	fclose(acc);
	
	
	
	
	
	
	return 0;
}
