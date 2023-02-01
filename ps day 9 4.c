#include <stdio.h>

int main()
{
    int t,i;
    scanf("%d",&t);
    int n[t];
    for (i=0; i<t;i++)
    {
        scanf("%d",&n[i]);
    }
     for (i=0; i<t;i++)
    {
        printf("%d\n",(n[i]*(n[i]-1))/2);
    }
    return 0;
}
