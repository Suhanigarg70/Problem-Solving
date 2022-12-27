#include<stdio.h>
#include<math.h>
int main()
{
    int m,sum,r;
    printf("enter the number:");
    scanf("%d",&m);
    while(m/10>0)
    {
        while(m>0)
        {
        r=m%10;
        sum=sum+r;
        m=m/10;
         }

    if (sum/10>0)
        {
        m=sum+m;
        }
    else{

        break;
    }
}
    printf("%d",sum);
    return 0;


}
