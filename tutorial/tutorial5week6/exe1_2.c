#include<stdio.h>
int main(){
	int number,count=0; 	//variable
	float sum,average;		//variable
	
	printf("enter numbers :-  ");	//prompt
	scanf("%d",&number);		//read integer
	
	while(number>=0){		//repetition condition
		printf("%d \n",number);	//print number
		count++;		//count+1
		
		sum=sum+number;		//assign total to sum
		
		printf("enter numbers :-  "); //prompt
		scanf("%d",&number);		//read integer
		
	}
	
	average=sum/count;		//assign average
	
	printf("sum :- %.2f\n",sum);		//print sum
	printf("average :- %.2f",average);		//print average
	
	return 0;
	
}


