//C program to check even or odd number using bitwise operator
 
#include <stdio.h>

int main()
{
    int num;
    printf("Enter any number: ");
    scanf("%d", &num);

    if(num & 1)
    {
        printf("%d is odd.", num);
    }
    else
    {
        printf("%d is even.", num);
    }

    return 0;
}
