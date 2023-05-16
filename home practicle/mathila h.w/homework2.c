//		mathila nissanka
//id number :   200135502857

#include<stdio.h>
#include<string.h>
int main(void){
	char stid[20];
	int temtotal;
	char word[30];
	int number=0,senu=0;
	int total=0,temnum=0,i=0,j,length=0;
	
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
		length=0;
	
	
	printf("\n");
	
	for(j=1;j<=total;j++){
		printf("Enter your word : ");	//prompt
		gets(word);						//read string
		length=strlen(word);
		for(i=0;i<length;i++){
			
			
			//print Morse code for each character
			if((word[i]=='A')||(word[i]=='a')){
				printf(".- ");
			}
			else if((word[i]=='B')||(word[i]=='b')){
				printf("-... ");
			}
			else if((word[i]=='C')||(word[i]=='c')){
				printf("-.-. ");
			}
			else if((word[i]=='D')||(word[i]=='d')){
				printf("-.. ");
			}
			else if((word[i]=='E')||(word[i]=='e')){
				printf(". ");
			}
			else if((word[i]=='F')||(word[i]=='f')){
				printf("..-. ");
			}
			else if((word[i]=='G')||(word[i]=='g')){
				printf("--. ");
			}
			else if((word[i]=='H')||(word[i]=='h')){
				printf("--. ");
			}
			else if((word[i]=='I')||(word[i]=='i')){
				printf(".. ");
			}
			else if((word[i]=='J')||(word[i]=='j')){
				printf(".--- ");
			}
			else if((word[i]=='K')||(word[i]=='k')){
				printf("-.- ");
			}
			else if((word[i]=='L')||(word[i]=='l')){
				printf(".-.. ");
			}
			else if((word[i]=='M')||(word[i]=='m')){
				printf("-- ");
			}
			else if((word[i]=='N')||(word[i]=='n')){
				printf("-. ");
			}
			else if((word[i]=='O')||(word[i]=='o')){
				printf("--- ");
			}
			else if((word[i]=='P')||(word[i]=='p')){
				printf(".--. ");
			}
			else if((word[i]=='Q')||(word[i]=='q')){
				printf(".--. ");
			}
			else if((word[i]=='R')||(word[i]=='r')){
				printf(".-. ");
			}
			else if((word[i]=='S')||(word[i]=='s')){
				printf("... ");
			}
			else if((word[i]=='T')||(word[i]=='t')){
				printf("- ");
			}
			else if((word[i]=='U')||(word[i]=='u')){
				printf("..- ");
			}
			else if((word[i]=='V')||(word[i]=='v')){
				printf("...- ");
			}
			else if((word[i]=='W')||(word[i]=='w')){
				printf(".-- ");
			}
			else if((word[i]=='X')||(word[i]=='x')){
				printf("-..- ");
			}
			else if((word[i]=='Y')||(word[i]=='y')){
				printf("-.-- ");
			}
			else if((word[i]=='Z')||(word[i]=='z')){
				printf("--.. ");
			}
			
			
			
		}
		
		printf("\n\n");
				
	}	
	
	
	return 0;	
			
		
	
}//end main function
