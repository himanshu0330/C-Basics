//TO CECK THE HIGHEST OCCURING NUMBER:

#include <stdio.h>

int main()
{
    char a[20];
    scanf("%[^\n]%*c",a);
    char b[26]={0};
    for(int i=0;a[i];i++)
        b[a[i]-97]++;
    int max=b[0];
    int k=0;
    for(int i=0;i<=25;i++){
        if(max<b[i]){
        max=b[i];
        k=i+97;}
    }
    printf("the highest occuring character is %c = %d",k,max);
    return 0;
}
