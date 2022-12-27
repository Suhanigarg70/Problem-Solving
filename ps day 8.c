#include<stdio.h>
#include<math.h>
int main(){


    int a,b,k,d;
    printf("enter a and b:");
    scanf("%d %d",&a,&b);
    printf("enter the K th digit:");
    scanf("%d",&k);
    a=a+k;
    d = pow(a,b);
    printf("the final number is:%d",d);
    return 0;



}


