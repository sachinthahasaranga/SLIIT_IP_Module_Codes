/*Sachintha Hasaranga Niyangoda
IT21194962
Malabe group 1.2
SLIIT*/
#include<stdio.h>
//calAdditionalCharges function declaration
float calAdditionalCharges( int orderType, float subTotal );
//calTotalBill function declaration
float  calTotalBill(float subTotal, float charges);

int main(void){		//function main begins program execution
	float amount,charge;	//variable declaration
	int type;						//variable declaration
	
	printf("Enter sub total : ");	//prompt
	scanf("%f",&amount);		//read float values for amount variable
	do{
	printf("Enter order type: ");	//prompt
	scanf("%d",&type);			//read integer values for type variable
		if((type>3)&&(type>1)){
			printf("Invalid type \n");	//if type not between 1 and 3 print error messege
		}
	}while((type>3)&&(type>1));		//if type not between 1 and 3 re enter type
	
	
	charge=calAdditionalCharges(type,amount);	//invoke calAdditionalCharges function 
	printf("Total bill amount : %.2f",(calTotalBill(amount,charge)));	//invoke calTotalBill function function and print total
	
	
	return 0;
}	//end function main
float calAdditionalCharges( int orderType, float subTotal ){//calAdditionalCharges function implementation
	float addcharge;
	
	if (orderType==1){
		addcharge=((subTotal*15.0/100)+(subTotal*10.0/100));	//assign charge
	}//end if
	else if(orderType==2){
		addcharge=(subTotal*15.0/100);							//assign charge
	}//end else if
	else if(orderType==3){
		addcharge=((subTotal*15.0/100)+(subTotal*5.0/100));		//assign charge
	}//end else if
	
	return addcharge;
}//end calAdditionalCharges function
float  calTotalBill(float subTotal, float charges){//calTotalBill function implementation
	return subTotal+charges;	//return total amount
}//end calTotalBill function
