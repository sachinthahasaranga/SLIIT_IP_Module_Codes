#include <stdio.h>
int main(){
	
	char ch;	
	int number;
	
	printf("enter your number    :-   ");
	scanf("%d%*c",&number);
	printf("plz input a character:-   ");
	scanf("%c%*c",&ch);
	
	
	printf("\nthe character ascill code is %d",ch);
	
	return 0;
	
	
}
