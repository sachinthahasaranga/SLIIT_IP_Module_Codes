#include<stdio.h>
#include<string.h>
#define size 20
int main(){
	char newArr[size];
	int length,i,tem,c=0;
	
	printf("enter word : ");
	scanf("%s",newArr);
	
	length= strlen(newArr);
	
	for(i=0;i<length;i++){
		tem=(int)newArr[i];
		if (tem<=122&&tem>=97){
			tem=tem-32;
			c++;
		}
		newArr[i]=(char)tem;
	}
	printf("\n\n%s",newArr);
	printf("\n\n%d",c);
	
	return 0;
}
