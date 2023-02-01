#include<stdio.h>
int main()
{
    int n,a;
    scanf("%d",&n);
    a=0;
    while(n!=0)
    {
        if(n%2==0)
        {
            n=n/2;
            a++;
        }
        else
        {
            n=n-1;
            a++;
        }
    }
    printf("%d",a);
    return 0;

}
