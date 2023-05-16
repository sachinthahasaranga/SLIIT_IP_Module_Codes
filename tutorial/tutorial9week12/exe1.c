//IT21194962 Sachintha hasaranga
#include<stdio.h>
#include<string.h>
#define size 30
int main(){	//main function execute
	char palindrome[size];	//array declaration
	int i,j,length;		//variables for counting
	int word=0;
	
	printf("Enter word  ");	//prompt
	scanf("%s",palindrome);	//read an integer for palindrome variable
	
	length=strlen(palindrome);	//assign array lenth to length variable
	j=length-1;		//assign length variable -1 to j variable for count
	
	for(i=0;i<length/2;i++){	//check word lenth less than lenth/2	
		if(palindrome[i]==palindrome[j]){	//check equal word count
			word++;
			j--;	//decrement j by 1		
		}
	}	//end if loop
	
	if(word==length/2){
		printf("%s is a palindrome",palindrome);	//if that word is palindrome print it is a palindrome
	}//end if loop
				
	else{
		printf("%s not a palindrome",palindrome);	//if that word is not palindrome print it is not a palindrome
			
	}//end else loop
	
	
	return 0;
}//end main function
