//A program to concatenate two string without library functions
#include<stdio.h>
#include<string.h>
int main()
{
    char str1[500],str2[500],new[500];
    int i,j;
    string1:
    printf("\nEnter the 1st string ending with $ --> ");
    gets(str1);
    if(str1[strlen(str1)-1]!='$')
    {
    printf("\nPlease enter a string ending with $");
    goto string1;
    }
    string2:
    printf("\nEnter the 2nd string ending with $ --> ");
    gets(str2);
    if(str2[strlen(str2)-1]!='$')
    {
        printf("\nPlease enter a string ending with $");
        goto string2;
    } 

        i=0;
        while(str1[i]!='\0')
        {
            new[i]=str1[i];
            i++;
        }
        j=0;
        while(str2[j]!='\0')
        {
            new[i]=str2[j];
            j++;
            i++;
        }
    new[i]='\0';
    printf("\nThe concatenated string is %s",new);
}    

         