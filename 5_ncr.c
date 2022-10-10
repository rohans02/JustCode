//A Program to find nCr
#include<stdio.h>
int ncr(int x, int y);  //Function prototype
int main()
{
    int n,r;
    printf("Enter the number of terms --> ");
    scanf("%d",&n);
    printf("Enter how many times it occured");
    scanf("%d",&r);
    printf("%dC%d = ",n,r);
    ncr(n,r);    
}
//Function definition
int ncr(int x , int y)
{
    int prd=1,i,prd1=1,prd2=1,val;
    val = x-y;
    if(val<0)
    {
        printf("!!!MATH ERROR !!!");        
    }
    else
    {
        for(i=x;i>0;i--)
        {
            prd*=i;
        }
        for(i=val;i>0;i--)
        {  
            prd1*=i;            
        }
        for(i=y;i>0;i--)
        {
            prd2*=i;
        }
        printf("%d",prd/(prd1*prd2));
    }    
    
}