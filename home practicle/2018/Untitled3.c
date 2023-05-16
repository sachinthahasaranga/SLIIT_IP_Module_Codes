#include<stdio.h>
int main(void){
	char type;
	float total1=0,total2=0,total3=0;
	int stcount=0,hcount=0,mcount=0,fcount=0,i,temtype;
	
	
	for(i=1;i<=100;){
		
		printf("enter type : ");
		type=getchar();
		getchar();
		
		temtype=(int)type;
		if(temtype>=49&&temtype<=57){
			break;
		}
		
		if(type=='h'||type=='H'){
			hcount++;
			i++;
		}
		else if(type=='m'||type=='M'){
			mcount++;
			i++;
		}
		else if(type=='f'||type=='F'){
			fcount++;
			i++;
		}
		else{
			printf("invalid type. plz enter again. \n");
		}	
		
	}
	
	printf("\nH count : %d\n",hcount);
	printf("H total : %.2f\n\n",1500.00*hcount);
	printf("M count : %d\n",mcount);
	printf("M total : %.2f\n\n",2000.00*mcount);
	printf("F count : %d\n",fcount);
	printf("F total : %.2f\n\n",2500.00*fcount);
	printf("total student count : %d\n",i-1);
	
	
	return 0;
}
