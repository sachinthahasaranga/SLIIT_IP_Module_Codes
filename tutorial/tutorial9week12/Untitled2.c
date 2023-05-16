//it21199226 rivi abhishek malabe campus group 1.2 .
#include <stdio.h>
#include <string.h>
#define strings 256//defining the string .
//function main begins .
int main()
{
   char str[strings] = {0};//initializing array .
   char i=0;//initianlizing variable .
   int str_len;//to check the string length 
 
   printf("Please enter a word to check Palindrome : ");//prompt .
   scanf("%s",str);//scanning the prompt .
   printf("\nEntered word: %s", str);//displaying the string .
 
//beginning of the while loop .
   while(1)
   {
      str_len = strlen(str) - (i+1);
//beginning a if statement . 
      if (str[i] == str[str_len])
      {
//beginning a if statement .     
   if (i == str_len || i+1 == str_len)
         {
            printf("\nEntered word \"%s\" is a palindrome", str);//displaying the result
            break;
         }//ending if statement .
            i = i+1;
      }//ending if statement .
    
   else
      {
         printf("\nEntered word \"%s\" is not a palindrome", str);//displaying the result
         break;
      }
   }
   return 0;
}//ending function main .
