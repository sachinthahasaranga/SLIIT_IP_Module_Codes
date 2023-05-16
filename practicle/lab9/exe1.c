#include <stdio.h>
int main(void)
{
int numbers[4][3] = {0};
int i, j;
for(i = 0; i < 4; i++) //Store integer values
{
for(j = 0; j < 3; j++)
{
printf("Enter integer value : ");
scanf("%d", &numbers[i][j]);
}
}
printf("\nArray Elements : ");
for(i = 0; i < 4; i++) //Display array element
{
for(j = 0; j < 3; j++)
{
printf("%d\t", numbers[i][j]);
}
}
return 0;
}
