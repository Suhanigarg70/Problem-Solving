#include<stdio.h>

int main()
{
    int a[5],b[5],i,j,k;
    printf("enter 5 element for the array reversal:");
    for(i=0;i<5;i++)
    {
        scanf("%d",&a[i]);
    }
    k=4;
    for (i=0;i<5;i++)
    {
        j=a[i];
        b[k]=j;
        k--;
    }
    printf("Array after reversal:\n");
    for(i=0;i<5;i++)
    {

        printf("%d\n",b[i]);
    }
    return 0;
}
