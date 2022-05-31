// TO CHECK THE GIVEN STRING CAN BECOME PALLINDOME OR NOT:

#include <stdio.h>

int main()
{
    char a[10],b[26]={0};
    scanf("%s",a);
    int k= strlen(a);
    int count=0,flag=0;
    for(int i=0;a[i];i++)
        b[a[i]-97]++;
    for(int i=0;i<=25;i++){
        if(b[i]%2!=0)
        count++;
    } 
        if(count>1)
            printf("string can not become pallindiome");
    else
            printf("string can  become pallindiome");
    return 0;
}
