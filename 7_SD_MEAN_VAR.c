//A Program to find mean varience and standard deviation
#include<stdio.h>
#include<math.h>
float mean(float x,float y);  //Function prototype
float varience(float x,float y);
int main()
{
    int a[50],n,sum=0,var=0,i;
    printf("Enter the how many numbers --> ");
    scanf("%d",&n);
    printf("Enter the numbers --> ");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        sum+=a[i];
        var+=a[i]*a[i];
    }
    mean(sum,n);
    varience(var,n);
}
//Mean
float mean(float x , float y)
{
    printf("Mean is %f ",x/y);
}
//Varience and SD
float varience(float x , float y)
{
    printf("Varience is %.1f \n",x/y);
    printf("SD is %.1f \n",sqrt(x/y));
}