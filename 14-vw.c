//A program to count vowels words in a paragraph
#include<stdio.h>
#include<string.h>
int main()
{
    char str[500],cv=0,cw=0,cs=0,v[]={'a','A','e','E','i','I','o','O','u','U'};
    int i=0,j=0;
    printf("Enter the paragraph  ");
    gets(str);
    while (i<strlen(str))
    {
        for(j=0;j<10;j++)
        {
            if(str[i]==v[j])
            {
                cv++;
                break;
            }
        }
        if(str[i]==' '||str[i]=='.'||str[i]==',')
        {
            cw++;
            if(str[i]=='.')
            {
                cs++;
                
            }
            
        }
        i++;
    }    
    printf("Total words = %d\n Total vowels = %d\n Total sentence = %d",cw,cv,cs);
    
} 