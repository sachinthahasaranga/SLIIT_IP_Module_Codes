#include<stdio.h>
int main(void){				//main function execute
	int patient=5;	
	char name[20];			//variable declaration
	char type;
	int con=0,sca=0,tes=0,i;
	
	FILE*app;
	app=fopen("appointment.dat","w");						//open file
	if(app==NULL){
		printf("this file can't open. try again. ");		//if file can't be fount print error messege
		return -1;											//exit from the program
	}
	
	for(i=0;i<patient;i++){		
		printf("enter patient name : ");			//prompt
		scanf("%s%*c",name);						//read a string to name variable
		printf("enter type (C,T,S) : ");			//prompt
		scanf("%c%*c",&type);						//read character to type variable
		
		fprintf(app,"%s\t%c\n",name,type);			//print to file
	}
	fclose(app);									//close file
	
	app=fopen("appointment.dat","r");						//open file
	if(app==NULL){
		printf("this file can't open. try again. ");		//if file can't be fount print error messege
		return -1;											//exit from the program
	}
	fscanf(app,"%s%*c%c",name,&type);		//read string and character from file 
	while(!feof(app)){						//read until file data are finished
		if(type=='C'||type=='c'){			//check type whether c or not
			con++;	}						//con increment by 1
		else if(type=='S'||type=='s'){		//check type whether s or not
			sca++;	}						//sca increment by 1
		else if(type=='T'||type=='t'){		//check type whether c\t or not
			tes++;	}						//tes increment by 1
	fscanf(app,"%s%*c%c",name,&type);		//read string and character from file 
	}
	fclose(app);							//close file
	printf("Appointment Type \tNumber of Patients\n");
	printf("Consulting\t\t%d\n",con);					//print number of patients of each type
	printf("Scanning\t\t%d\n",sca);
	printf("Testing\t\t\t%d\n",tes);
	return 0;
}//end main function
