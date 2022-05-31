// To Check the Inputted Number is Even Or Odd using Function

#include <stdio.h>

int isEven(int num)
{
    return !(num & 1);
}


int main()
{
    int num;
    

    printf("Enter any number: ");
    scanf("%d", &num);
    
    
    if(isEven(num))
    {
        printf("The number is even.");
    }
    else
    {
        printf("The number is odd.");
    }
    
    return 0;
}
