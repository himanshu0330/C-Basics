//Write a program to accept any number n and print the cube of all numbers from 1 to n which are divisible by 3.


#include <stdio.h>
int main()
{
    int num,i;
    long sum;
    printf("enter no.");
    scanf("%d",&num);
    for(i=1;i<=num;i++)
    {
        sum=i*i*i;
        if(sum%3==0)
            printf("%ld\n",sum);
    }
    return 0;
}
