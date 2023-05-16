#include<stdio.h>
#define size 10		//define array size
int main(void){		//execute main function 
	int marks[size]={0};	//marks array declaration
	int number,i;	//variables 
	int count=0;
	int total=0;
	float average=0.0;
	
	for(i=0;i<size;){
		printf("Enter marks :- ");
		scanf("%d",&number);
	
		if((number>=0)&&(number<=20)){	//check number between 0 and 10
			marks[i]=number;	//number assign to marks array
			i++;
		}//end if
		else{
			printf("invalid marks\n");		//print
		}//end else
		
	}
	
	
	for(i=0;i<size;i++){	//for print 10 statements
		printf("%d ,",marks[i]);	//print marks array values
		
	}//end if
	
	for(i=0;i<size;i++){	//assign total
		total=total+marks[i];	
		
	}//end if
	average=(float)total/size;		//assign average
	
	printf("\naverage is %.2f",average);	//print average
	
	
	return 0;
}//end main function
