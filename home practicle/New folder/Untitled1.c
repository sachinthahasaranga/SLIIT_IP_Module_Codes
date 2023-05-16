#include<stdio.h>
#define size1 2
struct book{
	char bookID[10];
	char title[20];
	int copies;
	int readers;	
}Book[3];

int main(){
	
	int i,j,max,x;
	
	for(i=0;i<size1;i++){
		
		printf("enter bookid : ");
		scanf("%s",Book[i].bookID);
		printf("enter title : ");
		scanf("%s",Book[i].title);
		printf("enter copies : ");
		scanf("%d",&Book[i].copies);
		printf("enter readers : ");
		scanf("%d",&Book[i].readers);
			
		printf("\n");
	}
	
	
	max=Book[0].readers;
	
	for(i=0;i<size1;i++){
		if(Book[i].readers>=max){
		max=Book[i].readers;
		x=i;
		}
	}
	
	printf("\nname of book is : %s\n",Book[x].title);
	printf("number of readers : %d\n",Book[x].readers);
	
	return 0;
}
