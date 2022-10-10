//A program to simulate string length copy ,concatenation ,reverse, replace and substring
#include<stdio.h>
#include<string.h>
#include<ctype.h>
void Strlen(char *s);
void Strcpy(char *s);
void Strcmp(char *s);
void Strrev(char *s);
void Strrp(char *s);
void Strsub(char *s);
int main()
{
    char str[50],choice,sub[50];
    int ch;
    printf("Enter the string  ");
    gets(str);
  do
  {  
        printf("\t\tString Menu\n");
        printf("------------------------------------------\n");
        printf("1.String-length\n");
        printf("2.Copy\n");
        printf("3.Concatenate\n");
        printf("4.Reverse\n");
        printf("5.Replace\n");
        printf("6.Substring\n");
        printf("------------------------------------------\n");
        printf("!!!Please enter a choice(1-6)!!!\n");
        scanf("%d",&ch);
        //String length
        if(ch == 1)
        {
            Strlen(str);
            printf("\nDo you want to go back to the main menu (y/n) --> ");
            scanf(" %c",&choice); 
        }
        //String copy
        else if(ch==2)
        {       
            Strcpy(str);
            printf("\nDo you want to go back to the main menu (y/n) --> ");
            scanf(" %c",&choice);             
        }
        //String Concatenate
        else if(ch==3)
        {
            Strcmp(str);
            printf("\nDo you want to go back to the main menu (y/n) --> ");
            scanf(" %c",&choice); 
        }
        //String Reverse
        else if(ch==4)
        {
            Strrev(str);
            printf("\nDo you want to go back to the main menu (y/n) --> ");
            scanf(" %c",&choice); 
        }
        //String Replace
        else if(ch==5)
        {
            Strrp(str);
            printf("\nDo you want to go back to the main menu (y/n) --> ");
            scanf(" %c",&choice);       
        }
        //Substring
        else if(ch==6)
        {
            Strsub(str);
            printf("\nDo you want to go back to the main menu (y/n) --> ");
            scanf(" %c",&choice);  
        }    
    }while(choice=='Y'||choice=='y');
}

void Strlen(char *s)
{
    printf("\nThe length of the string %s is --> ",s);
    printf("%d",strlen(s));
    
}
void Strcpy(char *s)
{
    char name[50];
    printf("\nEnter a the word that should be copied to %s --> ",s);
        scanf("%s",name);       
        strcpy(s,name);
        printf("\nAfter copying '%s'",name);
}
void Strcmp(char *s)
{
    char concat[50];
        printf("Enter a new string for performing concatenation --> ");
        scanf("%s",concat);
        strncat(s,concat,strlen(s) + strlen(concat)-1);
        printf("The concatenated string is '%s'",s);
}
void Strrev(char *s)
{
    char rev[50];
    int i;
    for(i=0;i<=strlen(s);i++)
        {
            rev[i]=s[strlen(s)-1-i];
        }
        printf("The reversed string is %s",rev);
}
void Strrp(char *s)
{
    char rp[50],rep[50];
    int i,j;
    printf("------------------------------------------\n");
        printf("The orginal string is --> %s",s);
        printf("\nEnter the word to be replaced %s --> ",&s);
        scanf(" %[^\n]s",rep);
        printf("Enter the replacing word %s --> ",&s);
        scanf(" %[^\n]s",rp);

      if(strlen(rep)==strlen(rp))
      {
        for (int i = 0; i <strlen(s); i++)
        {
            for (int j =0; j < strlen(s); j++)
            {
                    if (rep[i] == s[j])
                    {                    
                       s[j]=rp[i]; 
     
                    }
            }    
        }
        printf("The replaced string is --> ");
        puts(s);
        printf("------------------------------------------\n");
      }
      else
      {
        printf("\n-------------------------------------------------------------");    
        printf("\nPlz Enter the new word same len as that of the replacing word\n");
        printf("-------------------------------------------------------------\n");
      } 
}
void Strsub(char *s)
{
     int pos,len,i;
     char sub[50];
     printf("Enter the position and length of the substring of the string\n");
        scanf("%d%d",&pos,&len);
        i=0;
        while(i<len)
        {
            sub[i]=s[pos+i-1];
            i++;
        }
        sub[i]='\0';
        printf("The sub string is %s",sub);
}