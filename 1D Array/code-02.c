//To find max and min element of array


#include <stdio.h>
int main()
{
    int n;
    printf("enter no of elements:");
    scanf("%d",&n);
    int i,a[n],j,sum=0,num,num2;
    printf("input elements");
    for (i=0;i<n;i++)
        scanf("%d",&a[i]);
    num=a[0];
    for (j=1;j<n;j++)
    {
        if(a[j]>num)
            num=a[j];
    }
    printf("max of elements%d\n",num);
    num2=a[0];
    for (j=1;j<n;j++)
    {
        if(a[j]<num)
            num=a[j];
    }
     printf("min of elements%d",num);
    
    return 0;
}
