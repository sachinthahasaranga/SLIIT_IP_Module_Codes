#include<stdio.h>
int main(void)
{	float marks;
	char id[10];
	char name[20];
	int counts=0;
	
	FILE*fptr;
	fptr=fopen("marks.dat","r");
	if (fptr==NULL){
		printf("file cannot be open");
		return -1;
	}
	fscanf(fptr,"%s %s %f",id,name,&marks);
	counts++;
	while(!feof(fptr)){
		printf(fptr,"%s %s %f",id,name,marks);
		fscanf(fptr,"%s %s %f",id,name,&marks);
	}
	printf("\ncount is %d",counts);
	fclose(fptr);
	
	
	return 0; 
}
