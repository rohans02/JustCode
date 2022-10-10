//A program to read a string with dollar symbol then store it in  an array and count the number of vowels,consonants and spaces
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
    char str[500],cv=0,csp=0,con=0,num=0,v[]={'a','A','e','E','i','I','o','O','u','U'};
    int i=0,j=0;
    string1:
    printf("\nEnter the 1st string ending with $ --> ");
    gets(str);
    if(str[strlen(str)-1]!='$')
    {
    printf("\nPlease enter a string ending with $");
    goto string1;
    } 
    for (i = 0; i < strlen(str); i++)
    {
         if(str[i]==' ')
            {
                csp++;
            }
         else if(isdigit(str[i]))
        {
            num++;
        }
        else
        {
            for(j=0;j<10;j++)
            {
                if(str[i]==v[j])
                {
                    cv++;
                    break;
                }
                else if(str[i]!='$')
                {
                    con++;
                    break;
                }
                else if(str[i]=='$')
                {
                    printf("\n!!!Dollar Detected!!!\n");
                    break;
                }
                
            }
           
        }    
        
    }
    printf("------------------------------------------\n");
    printf("Total vowels = %d\nTotal consonents = %d\nTotal spaces = %d\nTotal numbers = %d\n",cv,con,csp,num);
    printf("------------------------------------------\n");
}    
    