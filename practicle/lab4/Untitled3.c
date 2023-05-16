#include<stdio.h>
int main(){
	int pt,nu;
	float total;
	
	printf("enter package type:- ");
	scanf("%d",&pt);
	printf("enter number of peoplr:- ");
	scanf("%d",&nu);
	
	switch (pt){
		case 1:total=nu*2000.00;
		break;
		case 2:total=nu*5000.00;
		break;
		case 3:total=nu*7000.00;
		break;
	
	}
	printf("\ntotal cost is Rs : %.2f",total);
	
	return 0;
}
