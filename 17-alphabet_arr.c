//A program to alphabatically arrange words
#include<stdio.h>
#include<string.h>
int main()
{
       char name[100][100],max[30],tname[100][100];
       int i,j,str;
       printf("How many  names do you wanna enter ");
       scanf("%d",&str);
       printf("Enter the  %d names: \n",str);
       for ( i = 0; i < str; i++)
       {
            scanf("%s", name[i]);
            strcpy(tname[i],name[i]);
       }
           
       
       for(i=0;i<str-1;i++)
       {
           for(j=i+1;j<str;j++)
           {
                if(strcmp(name[i],name[j])>0)
                {
                    strcpy(max,name[i]);
                    strcpy(name[i],name[j]);
                    strcpy(name[j],max);
                }
           }    

       }
               
        printf("\n----------------------------------------\n");
        printf("Input NamestSorted names\n");
        printf("------------------------------------------\n");
        for (i = 0; i < str; i++) 
        {
            printf("%s\t\t%s\n", tname[i], name[i]);
        }
        printf("------------------------------------------\n");

 
}       

