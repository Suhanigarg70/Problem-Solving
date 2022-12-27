#include<stdio.h>

int main()
{

    int arr[10],i,j;
    printf("Enter 10 elements of the array:");
    for (i=0;i<10;i++)
    {
        scanf("%d",&arr[i]);
    }

    for (i=0;i<10;i++)
    {
        j=arr[i];
        if(j%2!=0)
        {
            printf("%d",j);
        }

    }
    for (i=9;i>=0;i--)
    {
        j=arr[i];
        if(j%2==0)
        {
            printf("%d",j);
        }

    }
    return 0;

}
