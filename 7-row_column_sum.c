//A program to find the row and column sum 
#include<stdio.h>
void main()
{
    int ar[50][50],i,row,j,trace,r_sum=0,c_sum=0,column;
    printf("Enter the size of row elements in the array (less than 50) ");
    scanf("%d",&row);
    printf("Enter the size of column elements in the array (less than 50) ");
    scanf("%d",&column);
    //To find the row sum
    for(i=0;i<row;i++)
    {
        for(j=0;j<column;j++)
        {
             printf("Value.%d%d- ",i,j);
             scanf("%d",&ar[i][j]);                                    
        }              
    }
    printf("Column %d sum=%d\n",i,c_sum);
    //Displaying the matrix 
    for(i=0;i<row;i++)
    {
        for(j=0;j<column;j++)
        {
            
             printf("%d  ",ar[i][j]);
            
        }
        printf("\n");
    }
     //Displaying the row sum
     for(i=0;i<row;i++)
    {
        for(j=0;j<column;j++)
        {
             r_sum+=ar[i][j];
        }
    printf("Row %d sum=%d",i+1,r_sum);
    r_sum =0;
    printf("\n");
    }
    //Displaying the column sum
    for(i=0;i<column;i++)
    {
        for(j=0;j<row;j++)
        {
             c_sum+=ar[j][i];
        }
    printf("Column %d sum=%d",i+1,c_sum);
    c_sum =0;
    printf("\n");
    }
   
}            
             



