#include <stdio.h>
int main(){
	FILE*fptr;
	float marks;
	char id[10];
	char name[20];
	int i;
	
	fptr=fopen("marks.dat","a");
	if ( fptr == NULL)
	{
	printf("Cannot create file\n");
	return -1;
	}
	for(i=0;i<=1;i++){
	
	printf("Enter id ");
	scanf("%s",id);
	
	printf("Enter name ");
	scanf("%s",name);
	
	printf("Enter avg marks");
	scanf("%f",&marks);
	fprintf(fptr,"%s %s %.2f\n",id,name,marks);
}
	
	
	fclose(fptr);

	
	return 0;
}
