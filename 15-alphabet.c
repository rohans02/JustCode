//A program to covert letters into upper or lower case
#include<stdio.h>
#include<ctype.h>
int main()
{
    char str[50],ch;
    int i;
    label:
    printf("To which format do you want to convert Upper(U) or Lower(L)--");
    scanf("%c",&ch);
    printf("Enter the word to be converted--");
    scanf("%s",str);
    for(i=0;str[i]!='\0';i++)
    {
        if(ch=='U'||ch=='u')
        {
            str[i]=toupper(str[i]);
        
        }
        else if(ch=='L'||ch=='l')
        {
            str[i]=tolower(str[i]);
        }
        else
        {
            printf("\nPlease enter correctly");
            goto label;
        }
    }
    printf("The formated word is %s\n",str);
    return 0;
}    
    