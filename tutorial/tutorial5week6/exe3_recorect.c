#include<stdio.h>
int main(void){
	int marks=0;	//variables
	int st=0; 		//variable for student count
	int count=0; 	//variable for marks module count
	int total;		//variable for calculate student total marks
	int max=0;	//variable for calculate highest marks
	int student;	//variable for calculate highest mark student
	
	
	
	while(st<3){	//condition for count 3 student
		total=0;	//assign total to 0
		count=0;	//assign count to 1
		
		while(count<4){	//condition for count 4 marks
			
			printf("Enter module %d marks :-  ",count+1);	//prompt
			scanf("%d",&marks);		//read integer
			total=total+marks;	//assign marks for total
			count++;
		}
		printf("\ntotal marks :- %d \n\n",total); //print total marks
		
		if (st==0){
			max=total;	//for asign first student marks for max
			student=st+1;
		}
		
		
		if (total>max){		//condiction for calculate max
			max=total;		//assign max
			student=st+1;		//assign highest mark student
		}
		st++;		//next student
		
			
		
		
	}
	
	printf(" highest mark student is :- student %d with %d marks",student,max);
	//printhighest mark student with highest mark
	return 0;
}
