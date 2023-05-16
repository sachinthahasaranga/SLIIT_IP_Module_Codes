#include <stdio.h>
#include <assert.h>
char findGrade(float mark); //Function declarations
void testGrade();
int main(void)
{
	testGrade();
	float mark;
	printf("Enter mark of the module : ");
	scanf("%f", &mark);
	 printf("Grade = %c\n", findGrade(mark));
	return 0;
}
char findGrade(float mark) //Function implementation
{
	if(mark >= 75)
	return 'A';
	
	else if(mark >= 65)
	return 'B';
	
	else if(mark >= 45)
	return 'C';
	
	else
	return 'F';
}
void testGrade()
{
	assert(findGrade(85) == 'A');
	assert(findGrade(70) == 'B');
	assert(findGrade(55) == 'C');
	assert(findGrade(25) == 'F');
}

