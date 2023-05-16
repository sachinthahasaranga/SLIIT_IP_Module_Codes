#include<stdio.h>
#include<string.h>
int main(void){
	
	char sentence[50];
	int number=0,senu=0,min=1000;
	int total=0,temnum=0,i=0,length=0;
	
	printf("Enter Number : ");
	scanf("%d%*c",&number);
	
	number=number%1000;
		
	for(i=1;i<=3;++i){
		temnum=number%10;
		number=number/10;
		total=total+temnum;
	}	
	if(total>10){
		
		temnum=total%10;
		number=total/10;
		total=0;
		total=temnum+number;
	}
		length=0;
	for(i=1;i<=total;i++){
		printf("Enter your sentece : ");
		gets(sentence);
		
		length=strlen(sentence);
		if(min>length){
			min=length;
			senu=i;
		}
	}	
	
	printf("The shortest sentence is No : %d",senu);
	
	return 0;	
}
