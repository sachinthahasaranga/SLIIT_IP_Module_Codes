#include<stdio.h>
int main(){
	int age;		//variable
	char gender;
	
	printf("Enter your age		 		:-  "); //promp
	scanf("%d",&age);							//enter age with keybord
	printf("Enter your gender M or F	:-  ");
	getchar();			//for get to enter key
	gender=getchar();
	
	if (age>=65){
		if(gender=='m'||gender=='M'){		//check gender
			printf("SeniorMale");			//print seniormale
		}
		else if(gender=='f'||gender=='F'){	//check gender
			printf("SeniorFemale");			//print seniorfemale
		}
		
		
	}
	else{
		printf("This person is not a Senior persone");	//print not a Senior persone
	}
	
	return 0;
	
	
	
}
