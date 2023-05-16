#include<stdio.h>
int main(){
	int pnum;
	float localcharges,international,romingcharges,total;
	
	FILE*phone;
	phone=fopen("charges.dat","w");
	
	if(phone==NULL){
		printf("file can't be found");
		return -1;
	}
	while(1){
		printf("enter phone number : ");
		scanf("%d",&pnum);
		if (pnum == -1){
			break;
		}
		printf("enter local call charges : ");
		scanf("%f",&localcharges);
		printf("enter international call charges : ");
		scanf("%f",&international);
		printf("enter roaming charges : ");
		scanf("%f",&romingcharges);
		
		fprintf(phone,"%d\t%f\t%f\t%f\n",pnum,localcharges,international,romingcharges);
		
		printf("\n");
	}
	printf("\n\n");
	
	fclose(phone);	
	phone=fopen("charges.dat","r");
	
	if(phone==NULL){
		printf("file can't be found");
		return -1;
	}
	fscanf(phone,"%d%*c%f%*c%f%*c%f",&pnum,&localcharges,&international,&romingcharges);
	while(!feof(phone)){
		total=localcharges+international+romingcharges;
		printf("%d\t",pnum);
		printf("%.2f\n",total);
		fscanf(phone,"%d%*c%f%*c%f%*c%f",&pnum,&localcharges,&international,&romingcharges);
	}
	fclose(phone);
	
	return 0;
	
}
