#include<stdio.h>
int main(void){
	
	char itemid[20],itemname[20];
	int quantity,i,count=4;
	float price,total,nettot;
	
	FILE*shop;
	shop=fopen("purchase.txt","w");
	if(shop==NULL){
		printf("can't open file");
		return -1;
	}
	for (i=0;i<count;i++){
		printf("enter item ID: ");
		scanf("%s",itemid);
		printf("enter Name: ");
		scanf("%s",itemname);
		printf("enter quantity: ");
		scanf("%d",&quantity);
		printf("enter price: ");
		scanf("%f",&price);
		
		fprintf(shop,"%s\t%s\t%d\t%.2f\n",itemid,itemname,quantity,price);
		
	}
	fclose(shop);

	
	shop=fopen("purchase.txt","r");
	if(shop==NULL){
		printf("can't open file");
		return -1;
	}
	fscanf(shop,"%s%s%d%f",itemid,itemname,&quantity,&price);
	while(!feof(shop)){
		total=quantity*price;
		printf("%s\t%s\t%d\t%.2f\t%.2f\n",itemid,itemname,quantity,price,total);
		nettot=nettot+total;
		fscanf(shop,"%s%s%d%f",itemid,itemname,&quantity,&price);
		
	}
		printf("total\t\t\t\t%.2f",nettot);
	
	fclose(shop);	
	
	
	return 0;
}
