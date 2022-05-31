//C program for Swap Case of user Entered String

#include <stdio.h>
#define MAX_SIZE 100

int main()
{
    char str[MAX_SIZE];
    int i;
 
    printf("Enter any string: ");
    gets(str);

    for(i=0; str[i]!='\0'; i++)
    {
        if(str[i]>='A' && str[i]<='Z')
        {
            str[i] = str[i] + 32;
        }
    }

    printf("Lower case string: %s", str);

    return 0;
}
