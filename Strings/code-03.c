// To Check User enterd character is present in the User entered string or not

#include<stdio.h> 
#include<string.h>
int main()
{
    char a[100],p;
    int flag,i; 
    printf("enter the string:");
    gets(a);
    printf("enter the character:");
    scanf("%c",&p);
    int leng=strlen(a);
        for(i=0;i<leng;i++)
    {
        if(a[i]==p)
        {
            flag++;
            break;
        }
    }
    if(flag==0)
    printf("character does not exist.");
    else
    printf("%c exist first at position %d.",p,i+1);
}
