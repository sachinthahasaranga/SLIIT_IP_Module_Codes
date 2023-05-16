#include<stdio.h>

struct book{
	
	char BookID[10];
	char title[10];
	int noofcopies;
	int noofreaders;
	
	
}book[3];




int main( void )
{
	
	//char book[3][4];
	int i, j;
	
	for( i = 0; i < 3; i++ ){
		
		printf( "Enter the book ID :- " );
		scanf( "%s", book[i].BookID );
		printf( "Enter the book Title :- " );
		scanf( "%s", book[i].title );
		printf( "Enter the book's Number of copies :- " );
		scanf( "%d", &book[i].noofcopies );
		printf( "Enter the book's Number of readers :- " );
		scanf( "%d", &book[i].noofreaders );
		
		puts( "" );
		
	}
	
	for( i = 0; i < 3; i++ ){
		
		printf( "book%d ID :- %s \n", i + 1, book[i].BookID );
		printf( "book%d Title :- %s \n", i + 1, book[i].title );
		printf( "Number of copies of book%d :- %d \n", i + 1, book[i].noofcopies );
		printf( "Number of readers of book%d :- %d \n", i + 1, book[i].noofreaders );
		
		
		puts( "" );
		
	}
	
	
	

	
	
		
	
	
	
	
	
	
	
	
	
	return 0;
	
}

