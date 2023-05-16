#include <stdio.h>
int main(void)
{
	double totalPay, finalPay, discount;
	
	printf("Enter total payment of a customer : ");
	scanf("%lf", &totalPay);
	
	discount=totalPay* (15.0 /100);
	finalPay = totalPay - discount;
	
	printf("Discount : %.2f\n" , discount);
	printf("Final Payment : %.2f\n" , finalPay);
	
	return 0;
}
