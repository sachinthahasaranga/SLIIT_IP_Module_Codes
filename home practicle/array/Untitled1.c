#include<stdio.h>
#define size 5		//rate array size declaration
int main(){
	int rate[size]={0};		//rate array declaration
	int i=0,j=0,number=0;		
	int rate1=0,rate2=0,rate3=0,rate4=0,rate5=0;
	
	printf("enter number :- ");		//promt
	scanf("%d",&number);			//read integer to number variable
	
	while(number!= -1){		//check number not equal to -1
		
		if((number<=5)&&(number>=1)){		//add first 5 numbers between 1 and 5 to rate array
			for(i;i<size;){
				rate[i]=number;
				++i;
				break;
			}
		}else{
			printf("Invalid Number ");		//if number grater than 5 or less than 1 print invalid number
		}
		
		
		printf("enter number :- ");		//prompt
		scanf("%d",&number);		//read integer to number variable
		
	}
	
	for(j=0;j<size;j++){
		if(1==rate[j]){		//check how many 1 are in reate array
			rate1++;
		}
		if(2==rate[j]){		//check how many 2 are in reate array
			rate2++;
		}
		if(3==rate[j]){		//check how many 3 are in reate array
			rate3++;
		}
		if(4==rate[j]){		//check how many 4 are in reate array
			rate4++;
		}
		if(5==rate[j]){		//check how many 5 are in reate array
			rate5++;
		}
	}
	
	printf("Rating\t\tNumber of response\n");
	printf("1\t\t%d\n",rate1);					//print outputs
	printf("2\t\t%d\n",rate2);
	printf("3\t\t%d\n",rate3);
	printf("4\t\t%d\n",rate4);
	printf("5\t\t%d\n",rate5);
	
	
	return 0;
}
