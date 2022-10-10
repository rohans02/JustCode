//A program to find the average of a set of numbers
#include<stdio.h>
int main()
{
    int var,i;  //var denote the size of the array
    float sum=0,avg,ar[30];
    printf("Enter the size of elements (should be less than 30)");
    scanf("%d",&var);
    printf("Enter the numbers (Please make sure the user should click the enter btn after every printing)\n");
    for(i=0;i<var;i++)
    {
        printf("Value.%d = ",i+1);
        scanf("%f",&ar[i]);
        sum=sum+ar[i];
    }
    avg=sum/var;
    printf("The average of %d elements are %0.1f",var,avg);

}
