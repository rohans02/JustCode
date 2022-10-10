//A Program to transpose a given matrix
#include<stdio.h>
int main()
{
    int a[50][50],i,r,cl,j;
    printf("Enter the number of rows and columns of  matrix");
    scanf("%d%d-",&r,&cl);   
     printf("Enter the values of 1st matrix");           //Define matrix A
        for(i=0;i<r;i++)
        {
            for(j=0;j<cl;j++)
            {
                printf("Value.%d%d- ",i,j);
                scanf("%d",&a[i][j]);
            }
        }
        //Displaying matrix A
        for(i=0;i<r;i++)
        {
            for(j=0;j<cl;j++)
            {
                printf(" %d ",a[i][j]);
                
            }
            printf("\n");
        }
        printf("\n");
         for(i=0;i<r;i++)                                //Displaying the transpose of matrix A
        {
            for(j=0;j<cl;j++)
            {
                printf(" %d ",a[j][i]);
            }
            printf("\n");
        }
        return 0;
}            