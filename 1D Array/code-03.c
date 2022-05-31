// C program to search element in array

#include <stdio.h>
int main()
{
    int arr[100];
    int size, i, num, found;
    printf("Enter size of array: ");
    scanf("%d", &size);
    printf("Enter elements in array: ");
    for(i=0; i<size; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("\nEnter element to search: ");
    scanf("%d", &num);
    found = 0; 
    
    for(i=0; i<size; i++)
    {
        if(arr[i] == num)
        {
            found = 1;
            break;
        }
    }
    if(found == 1)
    {
        printf("\n%d is found at position %d", num, i + 1);
    }
    else
    {
        printf("\n%d is not found in the array", num);
    }
    return 0;
}
