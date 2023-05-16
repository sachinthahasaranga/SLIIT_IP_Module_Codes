/*IT21194962
Sachintha Hasaranga Niyangoda
SLIIT Malabe weekdays group1.2*/
#include<stdio.h>
#define raws 3
#define columns 5
int main(void){	//main function execute
	int i,j;							//variable declaration for counting
	float size[raws][columns]={0};		//define array called size
	float avgSize[raws]={0};			//define array called avgSize
	float average;						//variable declaration
	
	//for enter size of the chocolate balls from the key board and store the sizes array
	for(i=0;i<raws;i++){
		printf("Machine %d\n--------------------------\n",i+1);	//prompt
		for(j=0;j<columns;j++){
			printf("Enter the size of the chocolate ball : ");	//prompt
			scanf("%f",&size[i][j]);		//read a float 
		}//end for
		puts(" ");
	}//end for
	
	//Find the average size of balls of each machine and store.
	for(i=0;i<raws;i++){
		average=0;
		for(j=0;j<columns;j++){
			average=average+size[i][j];			//calculate average
		}//end for
		avgSize[i]=average/columns;
	}//end for
	
	puts(" ");
	//Display the average size of each machine
	for(i=0;i<raws;i++){
		printf("machine %d  average size is : %.2f\n",i+1,avgSize[i]); //print average size of each machine
	}//end for
	
	
	
	return 0;
}//end main function
