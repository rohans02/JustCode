
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
1
2
3
4
5
6
7
8
9
10
11
12
13
14
15
16
17
18
19
20
21
22
	
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
