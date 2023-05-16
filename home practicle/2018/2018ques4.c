#include<stdio.h>
int main(void){
	char enumber[10];
	char name[20];
	int count,attendance;
	
	
	FILE*fptr;
	fptr=fopen("attendance.dat","a");
	if(fptr==NULL){
		printf("this file can't' be found");
		return -1;
	}
	
	while(1){
		printf("enter employee number : ");
		scanf("%s%*c",enumber);
		if(enumber=='m'){
			break;
		}
		printf("enter employee name : ");
		scanf("%s%*c",name);
		printf("enter employee attendance : ");
		scanf("%d%*c",&attendance);
		
		fprintf(fptr,"%s\t%s\t%d\n",enumber,name,attendance);
		
	}
	
	fclose(fptr);
	
	fptr=fopen("attendance.dat","r");
	if(fptr==NULL){
		printf("this file can't' be found");
		return -1;
	}
	fscanf(fptr,"%s%*ct%s%*c%d%*c",enumber,name,&attendance);
	while(!feof(fptr)){
		
	}
	
	
	
	
	
	return 0;
}
