//A program to multiply two matrix
#include<stdio.h>
int main()
{
    int a[50][50],b[50][50],i,j,r,c,m,n,sum[50][50],k;
    label:
    printf("Enter the number of rows and column of 1st matrix\t");
    scanf("%d%d-",&r,&c);
    printf("Enter the number of rows and column of 2nd matrix ");
    scanf("%d%d-",&m,&n);
   
        printf("Enter the values of the first matrix");
        printf("\n\n");           //Define matrix A
        for(j=0;j<r;++j)
        {
            for(i=0;i<c;++i)
            {
                printf("Value %d%d = ",j,i);
                scanf("%d",&a[j][i]);
            }
        }
        
        
        printf("Enter the values of the second matrix");          
        for(i=0;i<m;++i)
        {
            for(j=0;j<n;++j)
            {
                printf("Value %d%d =  ",i,j);
                scanf("%d",&b[i][j]);
            }
        }
         for(i=0;i<r;++i)                                    //Define matrix B
        {
            for(j=0;j<c;++j)
            {
                
                printf("   %d   ",a[i][j]);
            }
            printf("\n");
        }
        printf("\n\n");
         for(i=0;i<m;++i)
        {
            for(j=0;j<n;++j)
            {
                
                printf("   %d   ",b[i][j]);
            }
            printf("\n");
        }
        printf("\n\n");
        for(i=0;i<r;++i)                                  //Adding matrix A and matrix B
        {
            for(j=0;j<n;++j)
            {
                sum[i][j]=0;
                for(k=0;k<n;++k)
                {
                    sum[i][j]+=(a[i][k]+b[k][j]);
                }    
                
            }
            printf("\n\n");
           
        }
        for(i=0;i<r;++i)                                //Displaying the result
        {
            for(j=0;j<n;++j)
            {
                printf("   %d   ",sum[i][j]);
            }
            printf("\n\n");
        }
  
    return(0);
        



}
