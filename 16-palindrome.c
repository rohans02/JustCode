//A program to check for palindrome
#include<stdio.h>
#include<string.h>
int main()
{
      char str[100],choice;
      int len=0,flag,i;
      printf("Enter the String: ");
      gets(str);
     len = strlen(str);
      for(int i=0; i<len/2; i++)
      {
        if(!(str[i]==str[len-i-1]))
        {
            flag=0;
            break;
        }
        else
        {
            flag=1;
        }
        
      }

     if(flag==1)
     {
         printf("!!!!Eurekaa!!!! Its a palindrome");
     }
     else if(flag==0)
     {
         printf("No its not a palindrome\n");
     }
     
      return 0;
}