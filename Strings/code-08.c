//PROGRAM TO COUNT THE TOTAL NUMBER OF WORDS:

#include <stdio.h>

int main()
{
    char a[20];
    scanf(“%[^\n]%*c”,a);
    int word=0;
    for(int i=0;a[i];i++){
    if(a[i]==' ')
    word++;
    }
    word++;
    printf("total number of words= %d",word);
    return 0;
}
