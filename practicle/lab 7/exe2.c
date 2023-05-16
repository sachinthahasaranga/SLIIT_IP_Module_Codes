#include <stdio.h>
#include <assert.h>
#include <math.h>
float calMark(float final, float CA); //Function declaration
int main(void)
{
	assert(fabs(calMark(100.0, 100.0) - 100.0) < 0.01);
	assert(fabs(calMark(60.0, 70.0) - 64.0) < 0.01);
	
	float markFinal, markCA;
	
	printf("Enter mark for final exam : ");
	scanf("%f", &markFinal);
	printf("Enter mark for continuous assessments : ");
	scanf("%f", &markCA);
	
 	printf("Overall mark = %.2f\n", calMark(markFinal, markCA));
	return 0;
}
	float calMark(float final, float CA) //Function implementation
{
	float mark;
	mark = final * 0.6 + CA * 0.4;
	return mark;
}

