//TO COUNT THE NUMBER OF VOWELS, CONSONENTS,DIGITS AND SPECIAL CHARACTER IN THE STRING:

#include <stdio.h>

int main()
{
    char a[20];
    scanf(“%[^\n]&*c”,a);
    int vow=0,conso=0,digi=0,spech=0;
    for(int i=0;a[i];i++){
    if(65<=a[i] && a[i]<=90 || 97<=a[i] && a[i]<=122){
        if(a[i]=='a'||a[i]=='A'||a[i]=='i'||a[i]=='I'||a[i]=='o'||a[i]=='O'||a[i]=='u'||a[i]=='U'||a[i]=='E'||a[i]=='e')
        vow++;
        else
        conso++;
    }
    else if(48<=a[i] && a[i]<=57)
    digi++;
    else
    spech++;}
    printf("vowels= %d\nconsonants= %d\ndigit=%d\nspecial charater= %d",vow,conso,digi,spech);

    return 0;
}
