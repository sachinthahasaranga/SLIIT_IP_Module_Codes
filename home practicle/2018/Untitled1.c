#include<stdio.h>
int main(void){
	char enumber[10];
	char name[20];
	int count,attendance,total,i,j;
	
	
	FILE*fptr;
	fptr=fopen("attendance.dat","w");
	if(fptr==NULL){
		printf("this file can't' be found");
		return -1;
	}
	for(i=1;i<=2;i++){
		printf("enter employee number : ");
		scanf("%s",enumber);
		printf("enter employee name : ");
		scanf("%s",name);
		
		fprintf(fptr,"%s\t%s\t",enumber,name);
		
		for(j=1;j<=7;j++){
			printf("enter employee attendance day %d: ",j);
			scanf("%d",&attendance);
			fprintf(fptr,"%d\t",attendance);
		}
		fprintf(fptr,"\n");
	}
	fclose(fptr);
	
//for print attendance		
	fptr=fopen("attendance.dat","r");
	if(fptr==NULL){
		printf("this file can't' be found");
		return -1;
	}
	
	
	fscanf(fptr,"%s%s",enumber,name);
	total=0;
	for(j=1;j<=7;j++){
			fscanf(fptr,"%d",&attendance);
			if(attendance==1){
				total++;
			}	
		}

	while(!feof(fptr)){
		printf("%s\t\t",name);
		printf("attendance : %d\n",total);
		total=0;
		
		fscanf(fptr,"%s%s",enumber,name);
	
		for(j=1;j<=7;j++){
			fscanf(fptr,"%d",&attendance);
			if(attendance==1){
				total++;
			}	
		}	
	}
	fclose(fptr);
	
	
	
	
	return 0;
}
