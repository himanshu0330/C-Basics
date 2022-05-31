//PROGRAM TO FIND ALL THE OCCURANCE OF THE SEARCHED CHARACTER:

#include <stdio.h>

int main()
{
    char a[20];
    scanf("%[^\n]%*c",a);
    char ch;
    printf("enter the character to be searched: ");
    scanf("%c",&ch);
    for(int i=0;a[i];i++){
        if(a[i]==ch){
        printf("the character searched is on index %d\n",i);

        }
    }
    return 0;
}
