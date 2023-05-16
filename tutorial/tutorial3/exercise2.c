#include<stdio.h>
int main(void){
	int nu,a,b,c,d,e;
	
	printf("enter your number:- ");
	scanf("%d",&nu);
	
	if (9999<nu<=99999){
		a=nu/10000;
		b=nu/1000%10;
		c=nu/100%10;
		d=nu/10%10;
		e=nu%10;
		
		
	}
	printf("\n\n%d\t%d\t%d\t%d\t%d",a,b,c,d,e);
	
	
	
	
	
	return 0;
	
}
