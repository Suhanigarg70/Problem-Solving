#include<stdio.h>
int main()
{
    int a,b,c,i,j;
    printf("enter the range for prime numbers:");
    scanf("%d %d",&a,&b);
    for(i=a;i<=b;i++)
    {
        for(j=2;j<i;j++)
        {
            if(i%j==0)
                break;

        }

    }
    return 0;


}
