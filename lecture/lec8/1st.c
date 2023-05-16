#include <stdio.h>
int main(){
	FILE*fptr;
	int num=10;
	fptr=fopen("number.dat","a");
	if ( fptr == NULL)
	{
	printf("Cannot create file\n");
	return -1;
	}

	fprintf(fptr,"%d",num);
	fclose(fptr);

	
	
	
	
	return 0;
}
