#include <stdio.h>
int main()
{
    int i,j,k,a[15][15],n;
    printf("enter any odd no.:");
    scanf("%d",&n);
    i=n-1;
    j=(n-1)/2;
    for(k=1;k<=n*n;k++)
    {
       a[i][j]=k;
       i++;
       j--;
       if(k%n==0){
        i-=2;
        j++;}
       if(i==n)
        i=0;
       if(j==-1)
        j=n-1;
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
            printf("%d   ",a[i][j]);
        printf("\n");
    }
    return 0;
}
