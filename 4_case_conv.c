//A Program to the nth power
#include<stdio.h>
#include<ctype.h>
#include<stdlib.h>
void Case(char *x);  //Function prototype
int main()
{
    char a[30];
    printf("Enter the string --> ");
    scanf("%[^\n]s",&a);
    printf("-----CASE MENU-----\n");
    printf("1.To Uppercase\n");
    printf("2.To Lowercase\n");
    printf("-------------------\n");
    Case(a);
    return 0;    
}
//Function definition
void Case(char *x)
{
    int ch,i=0;
    char temp[30];
    printf("Enter your choice(1/2)");
    scanf("%d",&ch);
    if(ch==1)
    {
        while(x[i]!='\0')
        {
            temp[i]= x[i]-32;
            i++;
        }
        printf("%s",temp);
        
    }
    else
    {
         while(x[i]!='\0')
        {
            temp[i]= x[i]+32;
            i++;
        }
        printf("%s",temp);
    }
    
}
