#include<stdio.h>
int main()
{
   int disp[2][3],disp1[2][3],dif[2][3];
   
   int i, j;
   for(i=0; i<2; i++) 
   {
      for(j=0;j<3;j++) 
      {
         printf("Enter value for FIrst Matrix[%d][%d]:", i, j);
         scanf("%d", &disp[i][j]);
      }
   }
    printf("\n\n");
   for(i=0; i<2; i++) 
   {
      for(j=0;j<3;j++) 
      {
         printf("Enter value for Second Matrix[%d][%d]:", i, j);
         scanf("%d", &disp1[i][j]);
      }
   }
   
   printf("Subtraction Two Dimensional array elements:\n");
   for(i=0; i<2; i++) 
   {
      for(j=0;j<3;j++) 
      {
        dif[i][j]=disp[i][j]-disp1[i][j];
         printf("%d ", dif[i][j]);
         if(j==2)
         {
            printf("\n");
         }
      }
   }
   return 0;
}