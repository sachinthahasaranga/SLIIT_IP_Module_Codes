# include <stdio.h>
# define SIZE 5
void modifyArray( int b[ ], int size);
int main(void)
{
int a[ SIZE ] = {0, 1, 2, 3, 4}; 
int i; // counter
//output original array
for( i = 0; i < SIZE; ++i){

	printf("%3d", a[ i ]);}
puts(" ");
modifyArray( a , SIZE);
// output modified array
 
}
void modifyArray( int b[ ], int size)
{
	int i;
	for( i = 0; i < SIZE; ++i)
printf("%3d", b[i ]);
}
