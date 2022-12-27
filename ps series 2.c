#include<stdio.h>
int main()
{

    int s,i,f,n;
    scanf("%d",&n);
    s=0;
    f=1;
    for(i=1;i<=n;i++)
    {
        f=(f*i);
        s=(s+f/i);
    }
    printf("%d",s);
    return 0;
}

