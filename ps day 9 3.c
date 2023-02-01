#include<stdio.h>

int main()
{
    int t,b,i;
    scanf("%d",&t);
    int n[t];
    for (i=0;i<t;i++)
    {
        scanf("%d",&n[i]);
    }

    for (i=0;i<t;i++)
    {
        printf("%d\n",n[i]+1);
    }

    return 0;
}
