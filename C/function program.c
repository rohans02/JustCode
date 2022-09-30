#include<stdio.h>
#include<conio.h>
int factorial();
int fabonicca();
int factorial(int a)
{
if(a==0)
return 1;
else
return (a*factorial(a-1));
}
int fabonicca(int b)
{
if(b<=1)
return 1;
else
return (fabonicca(b-2)+fabonicca(b-1));
}
int main()
{
int x,y,t;
printf("enter your number =");
scanf("%d",&x);
printf("factorial value=%d",factorial(x));
printf("\nenter your number =");
scanf("%d",&y);
for(t=0;t<y;t++)
{
printf("%d",fabonicca(y));
}
getch();
return 0;
}
