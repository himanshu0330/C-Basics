// TO CONCATENATE TWO STRING:

#include <stdio.h>

int main()
{
    char a[]={"hello"}; //first string
    char b[]={"GlA"};   //second string
    char c[20];         //third string
    int i;
    for(i=0;a[i];i++)
    c[i]=a[i];              //first in third
    for(int j=0;b[j];j++)
    c[i++]=b[j];   //second in third
    c[i]=0;
    printf("%s",c);
