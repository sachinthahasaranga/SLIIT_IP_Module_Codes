/*c program to decler two diamentio
al array of type integer 3 rows and 3 coulms. initialize your array with 0, now input 12 values from the keybord and store with the array
extent your program to display the number enterd from the key bord display
and also calculate and dis[play sum of nuumbers stored in the array*/
#include<stdio.h>
#define row 3
#define column 4


int main( void )
{
	
	int array[row][column] = {0};
	int i, j, sum;
	
	for( i = 0; i < row; i++ ){
		
		for( j = 0; j < column; j++ ){
			
			
			printf( "Enter the Numbers row %d : - ", i + 1 );
			scanf( "%d", &array[i][j] );	
			
		}
		printf( "\n" );
		
		
		
	}
	
	for( i = 0; i < row; i++ ){
		
		for( j = 0; j < column; j++ ){
			
			printf( "%d\t", array[i][j] );
			sum = array[i][j] + sum;
			
		}
		
		printf( "\n" );
		
	}
	
	printf( "\nSum of the numbers :- %d", sum );
	 
	
	
	return 0;
	
	
}
