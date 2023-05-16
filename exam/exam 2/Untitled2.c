/*Name :- A.G. Thisara Dewinda
ID :- IT21196560
Group :- Group 1.2
Campus :- Malabe */

#include<stdio.h>

int main( void )// function main execute the program 
{
	
	int mark,total,count,o_total,t;// variable declaration
	char dis; // variable declaration
	
	dis = 'y';
	
	//cheks do the user want to input another set of marks
		
	while ( dis == 'y'||dis=='Y' ){
		count = 0;
		total=0;
		mark = 0;
			
			while ( count < 4 ){
	
				printf( "Enter the exam marks :-  " );
				scanf( "%d%*c", &mark );
	
				total = mark + total;
				count++;
				
			 }
			 
	 printf( "The total Marks :- %d\n", total );
				
				
	 printf( "do you want to enter a another students marks (Y/N) :-" );
	 scanf( "%c", &dis );
	continue;
	
	}
	
		
	
			
			
			
			
		
	
	
	
		
	
	
	
	
	
	
	
	
	

  	return 0;
}// end of the main function
