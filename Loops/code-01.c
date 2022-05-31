// C program to print all alphabets from a to z

#include <stdio.h>

int main()
{
    char ch;

    printf("Alphabets from a - z are: \n");
    for(ch='a'; ch<='z'; ch++)
    {
        printf("%c\n", ch);
    }

    return 0;
}
