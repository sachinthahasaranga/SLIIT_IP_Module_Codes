#include<stdio.h>
int main( void )
{
	int i,j;	//variables
	
	for( i=0; i <= 7; ++i ) {
		
		for( j=1; j <= i; ++j ) {
			
			printf( "*" );
		}
		
		printf("\n");
	}
	
		
	for( i=7; i >= 1; i-=2 ) {
		
		for( j=1; j <= i; ++j ) {
			
			printf( "*" );
		}
		
		printf("\n");
	}
	
	

	
	
	return 0;
}
