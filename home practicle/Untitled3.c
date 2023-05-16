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
		switch (gender){
			case 'M':
			case 'm':printf("SeniorMale");
			break;
			case 'F':
			case 'f':printf("SeniorfeMale");
			break;
		
		
		}
		
	}
	else{
		printf("This person is not a Senior persone");	//print not a Senior persone
	}
	
	return 0;
	
	
}
