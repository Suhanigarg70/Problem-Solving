#include<stdio.h>
#include<math.h>
int main()
{

    float s,f,n,x,h,p=0;
    int i;
    scanf("%f",&n);
    scanf("%f",&x);
    s=0;
    f=1;
    h=x;
    for(i=1;i<=n-1;i+2)
    {
        if(i%2==0)
        {
        f=f*i;
        p=pow(x,i);
        s=s+f;
        h=-(h+p/f);
        }
        else
        {
            f=f*i;
            p=pow(x,i);
            s=s+f;
            h=(h+p/f);
        }
    }
    printf("%f",h);
    return 0;
}
