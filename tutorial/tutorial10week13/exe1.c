#include<stdio.h>
int main(void){									//main function execute
    
    FILE*fptr;									//file pointer declaration
    int num,temp;								//variable declaration
    fptr=fopen("number.dat","a+");							//open file
    
    if(fptr==NULL){
		printf("this file can't open. try again. ");		//if file can't be fount print error messege
		return -1;											//exit from the program
	}
    
    printf("Enter number : ");					//prompt
    scanf("%d",&num);							//read integer to num variable
    
    fscanf(fptr,"%d",&temp);								//read integer from file and assign to trmp variable
    while(!feof(fptr)){										//reads the values till end of the file
        if(num==temp){
            printf("this number is alrady in the file");	//ckeck this number is in the file
            return -1;										//exit from the program
        }
        fscanf(fptr,"%d",&temp);							//read integer to num variable
    }
    fprintf(fptr,"%d\t",num);								//print integer to file
    fclose(fptr);											//close file
    	
    fptr=fopen("number.dat","r");				//open file
    
    if(fptr==NULL){
		printf("this file can't open. try again. ");		//if file can't be fount print error messege
		return -1;											//exit from the program
	}
    
    fscanf(fptr,"%d",&temp);					//read integer to temp variable
    while(!feof(fptr)){
        printf("%d\t",temp);					//print number
        fscanf(fptr,"%d",&temp);				//read integer to temp variable
    }
    fclose(fptr);								//close file
    
    
    return 0;
}													//end function main
