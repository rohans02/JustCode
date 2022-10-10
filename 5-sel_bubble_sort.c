//A program to implement bubble sort and selection sort
#include<stdio.h>
#include<string.h>
void main()
{
    int ar[50],i,n,j,temp,choice,pos;
    char ch;

   
    printf("Enter the size of 1st array a (less than 30) ");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("Value.%d- ",i+1);
        scanf("%d",&ar[i]);        
    }
  do
  {  
    printf("Enter your choice\n1.Bubble-sort\n2.Selection-sort\n");
    scanf("%d",&choice);
    if(choice==1)
    {
        for ( i = 0; i < n-1; i++)                          //for loop to implement bubble sort
        {
            for ( j = 0; j < n-i-1; j++)
            {
                if(ar[j]>ar[j+1])
                {   
                    temp = ar[j];
                    ar[j]=ar[j+1];
                    ar[j+1]=temp;
                }
            }
        }   
        for(i=0;i<n;i++)  
        printf("\nValue.%d- %d ",i+1,ar[i]);
        printf("\nDo you want to sort once more (y/n)\n");
        scanf(" %c",&ch);
    }
    else if(choice==2)
    {
        for(i=0;i<n-1;i++)
        {
            pos=i;
            for(j=i+1;j<n;j++)
            {
                if(ar[pos]>ar[j])
                {
                    pos=j;
                }
            }
            if(pos!=i)
            {
                temp=ar[i];
                ar[i]=ar[pos];
                ar[pos]=temp;

            }
        }
        for(i=0;i<n;i++)  
        printf("\nValue.%d- %d ",i+1,ar[i]);
        printf("\nDo you want to sort once more(y/n)\n");
        scanf(" %c",&ch);
    }    
}while(ch=='Y'||ch=='y');

}