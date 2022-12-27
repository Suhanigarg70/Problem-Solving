#include<stdio.h>
#include<math.h>
int main()
{

    float s,i,f,n,x,h,p=0;
    scanf("%f",&n);
    scanf("%f",&x);
    s=0;
    f=1;
    h=1;
    for(i=1;i<=n-1;i++)
    {
        f=f*i;
        p=pow(x,i);
        s=s+f;
        h=h+p/f;
    }
    printf("%f",h);
    return 0;
}

