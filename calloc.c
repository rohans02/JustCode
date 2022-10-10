#include<stdio.h>
#include<stdlib.h>
void read(int *x,int m)
{
    int i;
    for (i = 0; i < m; i++)
    {
        scanf("%d",&*(x+i));
    }
    
}
void display(int *x,int m)
{
    int i;
    for (i = 0; i < m; i++)
    {
        printf(" %d ",*(x+i));
    }
    
}
int main()
{
    int *array;
    int n=4;
    array = (int*)calloc(1,sizeof(int));
    read(array,n);
    display(array,n);
    free(array);
    return 0;
}
