/*Sachintha Hasaranga Niyangoda
IT21194962
Malabe group 1.2
SLIIT*/
#include<stdio.h>
int main(void){		//function main begins program execution
	int mark1,mark2,mark3,mark4;	//variable for input marks
	int count=1;		//variable for count
	int total=0;		//variable for assign total
	char check;			//variable for input yes or no
	
	printf("Enter the marks of Student 1(between 0-20)"); 	//prompt
	
	
	
	
	while (count>=0){	//check count grater than or equal to 0
		count++;		//assign count
		total=0;		
		
		printf("\n\nmark 1 - ");	//prompt
		scanf("%d",&mark1);		//read integer to mark1
		printf("mark 2 - ");	//prompt
		scanf("%d",&mark2);		//read integer to mark2
		printf("mark 3 - ");	//prompt
		scanf("%d",&mark3);		//read integer to mark3
		printf("mark 4 - ");	//prompt
		scanf("%d%*c",&mark4);	//read integer to mark4
		
		total=total+mark1+mark2+mark3+mark4;	//assign total
		
		printf("\nTotal marks - %d\n\n",total);		//print total
		printf("Do you want to enter mark of another student(y/n)?  ");	//prompt
		scanf("%c",&check);		//read character to check
		
		if (check=='y'||check=='Y'){	//check y or Y
			printf("\nEnter the marks of Student 1(between 0-20)");
			continue;
		}//end if
		else if(check=='n'||check=='N'){	//check n or N
			break;
		}//end else if
		
		
		
		
		
	}//end while
	
	
	
	
	return 0;
}	//end function main
