#include <stdio.h>
float calPayment(int itemCode, int quantity); //Function declaration
int main(void)
{
float payment;
int code, qty;
printf("Enter item code : ");
scanf("%d", &code);
printf("Enter quantity : ");
scanf("%d", &qty);
payment = calPayment(code, qty); //Function calling
 
 printf("Payment = %.2f\n", payment);
return 0;
}
float calPayment(int itemCode, int quantity) //Function implementation
{
if(itemCode == 1)
return 50.0 * quantity;
else if(itemCode == 2)
return 100.0 * quantity;
else
return 0;
}

