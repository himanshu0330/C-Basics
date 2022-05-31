//To copy all elements of one array to another


#include <stdio.h>
int main()
{
    int n;
    printf("enter no of elements:");
    scanf("%d",&n);
    int i,a[n],j,sum_e=0,sum_o=0;
    printf("input elements");
    for (i=0;i<n;i++)
        scanf("%d",&a[i]);
    int b[n];
    for (j=0;j<n;j++)
        b[j]=a[j];
    for (j=0;j<n;j++)
        printf("%d\t",b[j]);
    return 0;
}
