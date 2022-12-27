#include<stdio.h>
#include<math.h>

int main()
{
    int a,b,k,d;
    printf("enter value of A and B:");
    scanf("%d %d",&a,&b);
    printf("Enter the value of K:");
    scanf("%d",&k);
    a=a+k;
    d = pow(a,b);
    printf("%d",d);
    return 0;

}
