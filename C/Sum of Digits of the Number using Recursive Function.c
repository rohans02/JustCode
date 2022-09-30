
#include<stdio.h>

int calsum(int num) {
   int rem, sum;
   if (num != 0) {
      rem = num % 10;
      sum = sum + rem;
      calsum(num / 10);
   }
   return sum;
}

int main() {
   int num, val;
   printf("\nEnter a number: ");
   scanf("%d", &num);

   val = calsum(num);
   printf("\nSum of the digits of %d is : %d", num, val);

   return 0;
}
