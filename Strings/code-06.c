//TO COUNT THE FREQUENCY OF EACH CHARACTER OF THE STRING:

#include <stdio.h>

int main()
{
    char a[20];
    scanf(“%[^\n]%*c”,a);
    char b[26]={0};
    for(int i=0;a[i];i++)
        b[a[i]-97]++;

    for(int i=0;i<=25;i++){
        if(b[i]>0)
        printf("the frequency of each character %c = %d\n",i+97,b[i]);
    }
    return 0;
}
