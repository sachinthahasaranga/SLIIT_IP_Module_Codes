#include<stdio.h>
#define raws 2
#define columns 3

int main(void){
	float temp[raws][columns]={0};
	float avgtemp[raws]={0};
	int i,j;
	float average;
	
	
	for(i=0;i<raws;i++){
		for(j=0;j<columns;j++){
			printf("enter city %d temp: ",i+1);
			scanf("%f",&temp[i][j]);
		}
		puts("");
	}
	for(i=0;i<raws;i++){
		average=0;
		for(j=0;j<columns;j++){
			average=average+temp[i][j];
		}
		avgtemp[i]=average/columns;
	}
	
	for(i=0;i<raws;i++){
		printf("\ncity %d average tempreature : %.2f",i+1,avgtemp[i]);
	}
	
	
	return 0;
}
