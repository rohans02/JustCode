#include<stdio.h>
int main ()
{
    int num,c,a,b;
    printf("enter 1 for addition\nenter 2 for subtraction\nenter 3 for multiplication\nenter 4 for division\n");
    printf("enter you choice=");
    scanf("%d",&num);
    if(num==1)
    {
        printf("enter 2 number you want to add=");
        scanf("%d\n%d",&a,&b);
        printf("sum of above two numbers=%d",a+b);
    }
    if(num==2)
    {
        printf("enter 2 number you want to subtract(first-second)=");
        scanf("%d\n%d",&a,&b);
        printf("difference b/w above two numbers=%d",a-b);
    }
    if(num==3)
    {
        printf("enter 2 number you want to get product=");
        scanf("%d\n%d",&a,&b);
        printf("product of above two numbers=%d",a*b);
    }
    if(num==4)
    {
        printf("enter 2 number you want to divide(first/second)=");
        scanf("%d\n%d",&a,&b);
        printf("division of above two numbers=%d",a/b);
    }
return 0;
}
