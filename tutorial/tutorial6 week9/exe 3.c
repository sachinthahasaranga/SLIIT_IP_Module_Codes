/*sachintha hasaranga
it21194962
malabe group 1.2*/

#include<stdio.h>

int add(int addnum1,int addnum2);		// add function declaration
int multiply(int mulnum1,int mulnum2);	// multiply function declaration
int square(int squnum);					// square function declaratione

int main(void){		//funtion main begins program execution


	
	printf("%d",square(add(multiply(3,4),multiply(5,7)))); //invoke functions and print answer
	
	
	return 0;
}	//end of main function



int add(int addnum1,int addnum2){	//add function implementation
	return addnum1+addnum2;		//assign addition of two integer

}// end of add function

int multiply(int mulnum1,int mulnum2){	//multiply function implementation
	return mulnum1*mulnum2;		//assign multiply of two integer
	
}	//end of multiply function

int square(int squnum){	//suqare function implementation
	return squnum*squnum;	//assign square of integer
	
}	//end of square function
