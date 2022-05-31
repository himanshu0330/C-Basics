 //C program to calculate profit or loss
 
#include <stdio.h>
int main()
{
    int cp,sp, amt; 
    printf("Enter cost price: ");
    scanf("%d", &cp);
    printf("Enter selling price: ");
    scanf("%d", &sp);
    
    if(sp > cp)
    {
    "Profit = %d", amt);
    }
    else if(cp > sp)
    {
        amt = cp - sp;
        printf("Loss = %d", amt);
    }
    else
    {
        printf("No Profit No Loss.");
    }

    return 0;
}
