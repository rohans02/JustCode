//A Program to print english alphabets using recursion
#include<stdio.h>
int Alpa(int x);
int main()
{
    int ch;
    printf("---------Menu---------\n");
    printf("1.Small Letter (97-122)\n");
    printf("2.Capital Letter(65-90)\n");
    printf("---------Menu---------\n");
    printf("Enter the 1st ASCII\n");
    scanf("%d",&ch);
    Alpha(ch);
}
int Alpha(int x)
{
    if(x>=97 && x<=122)
    {
        printf("%c ",x);
        Alpha(x+1);
    }
    else if(x>=65 && x<=90)
    {
      printf("%c ",x);
        Alpha(x+1);  
    }
    
}