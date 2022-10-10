//A Program to the nth power
#include<stdio.h>
int Pow(int x,int y);  //Function prototype
int main()
{
    int a,n;
    printf("Enter the number --> ");
    scanf("%d",&n);
    printf("Enter the power to be raised --> ");
    scanf("%d",&a);
    printf("The power of %d to %d is %d",a,n,Pow(n,a));
}
//Function definition
int Pow(int x,int y)
{
    int prd = 1,i;
    for(i=0;i<y;i++)
    {
        prd = prd*x;
    }
    return prd;
    
}