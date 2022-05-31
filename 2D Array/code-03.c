//Printing a specific pattern using 2D Arrays

//1
//11
//121
//1331
//14641


#include <stdio.h>
int main()
{
    int i,j,a[15][15],n;
    printf("enter no. of lines:");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        for(j=0;j<=i;j++)
        {
            if (j==0||i==j)
                a[i][j]=1;
            else
                a[i][j]=a[i-1][j-1]+a[i-1][j];
        }
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<=i;j++)
            printf("%d",a[i][j]);
        printf("\n");
    }
    return 0;
}
