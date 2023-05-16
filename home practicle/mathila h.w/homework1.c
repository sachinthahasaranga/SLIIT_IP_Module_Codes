//		mathila nissanka
//id number :   200135502857
#include<stdio.h>
#include<string.h>
int main(void){
	char stid[20];
	int temtotal;
	char sentence[50];
	int number=0,senu=0,min=1000;
	int total=0,temnum=0,i=0,length=0;
	
	printf("Enter your student ID :  ");	//prompt
	scanf("%s%*c",stid);		//read string value for stid
	
	length=strlen(stid);		//calculate lenth of a string
	
	for(i=length-3;i<length;i++){	//ckeck ascii value for each character and calculate total of last 3 degit
		temtotal=stid[i];		
		
		if(temtotal==48){				//ckeck ascii value 
			number=number+0;		
		}
		else if(temtotal==49){			//ckeck ascii value
			number=number+1;
		}
		else if(temtotal==50){			//ckeck ascii value
			number=number+2;
		}
		else if(temtotal==51){			//ckeck ascii value
			number=number+3;
		}
		else if(temtotal==52){			//ckeck ascii value
			number=number+4;
		}
		else if(temtotal==53){			//ckeck ascii value
			number=number+5;
		}
		else if(temtotal==54){			//ckeck ascii value
			number=number+6;
		}
		else if(temtotal==55){			//ckeck ascii value
			number=number+7;
		}
		else if(temtotal==56){			//ckeck ascii value
			number=number+8;
		}
		else if(temtotal==57){			//ckeck ascii value
			number=number+9;
		}
	}
		
	while (number != 0) {
        total = total + number % 10;	//assign total of each degit
        number = number / 10;
    }	
			
	if(total>10){
		
		temnum=total%10;
		number=total/10;			//if tolat is grater than 10 calculate of each digit(2 digits because now it only has 2 digits)
		total=0;
		total=temnum+number;		//assign total of number
	}
	
	printf("\n");
	
	
		length=0;
	for(i=1;i<=total;i++){
		printf("Enter your sentence : ");	//prompt
		gets(sentence);						//read string
		
		length=strlen(sentence);			//assign minimum sentence and sentense number
		if(min>length){
			min=length;
			senu=i;
		}
	}	
	
	printf("\n\nThe shortest sentence is No : %d",senu);	//print
	
	return 0;	
		
		
		
	
}//end main function
