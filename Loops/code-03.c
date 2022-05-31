// C program to find Factorial of any Number

#include <stdio.h>

int main()
{
    int num,i;
    long long fact=1;
    printf("Enter any number to calculate factorial: ");
    scanf("%d",&num);
    fact = 1;
    i = 1;
    while(i <= num)
    {
        fact = fact * i;
        i++;
    }
     printf("Factorial of %d = %lld", num, fact);
 return 0;
}
