//Swapping numbers using bitwise operator 

#include<stdio.h>

int main(){
   int a,b;
   printf("enter the values for a and b:");
   scanf("%d%d",&a,&b);
   printf("value of a=%d and b=%d before swap\n",a,b);
   a= a^b;
   b= a^b;
   a= a^b;
   printf("value of a=%d and b=%d after swap",a,b);
   return 0;
}
