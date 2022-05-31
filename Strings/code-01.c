//C program to find length of a string using for loop

#include <stdio.h>
#define MAX_SIZE 100

int main()
{
    char text[MAX_SIZE]; 
    int i;
    int count= 0;
    printf("Enter any string: ");
    gets(text);
    for(i=0; text[i]!='\0'; i++)
    {
        count++;
    }
    printf("Length of '%s' = %d", text, count);

    return 0;
}
