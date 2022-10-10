//A Program to sort n strings
#include<stdio.h>
void sort(char x[][50],int count);  //Function prototype
int main()
{
    char str[50][50];
    int num,i;
    printf("How many strings are there --> ");
    scanf("%d",&num);
    for(i=0;i<num;i++)
    {
        printf("Enter the string --> ");
        scanf(" %[^\n]s",&str[i]);
        
    }
    sort(str,num);      
}
//Function definition
void sort(char x[][50],int count)
{
    char temp[50];
    int j,i;
   for(i=0;i<=count;i++)
   {
      for(j=i+1;j<=count;j++)
      {
         if(strcmp(x[i],x[j])>0)
         {
            strcpy(temp,x[i]);
            strcpy(x[i],x[j]);
            strcpy(x[j],temp);
         }
      }
   }  
    printf("Order of Sorted Strings:");
    for(i=0;i<=count;i++)
      puts(x[i]);
}        
            
        
        
    
