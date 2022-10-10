//A program to count the number of occurences of a given character in a word
#include<stdio.h>
#include<string.h>
{
    char ch,str[80];
    int i,count=0;
    printf("Enter the string");
    gets(str);
    printf("Enter the charcter");
    scanf("%c",&ch);
    for(i=0;i<strlen(str);i++)
    {
        if(str[i]==ch)
        {
            count++;
        }
    }
    printf("The number of occurence of %c is %d",ch,count);
    
}