#include<stdio.h>
#include<math.h>
int main()
{
    float a,c;
    float b;
    int d;
    printf("enter base and area:");
    scanf("%f %f",&a,&c);
    b = (c*2)/a;
     d = round(b);
    printf("height of the triangle is:%d",d);
    return 0;
}
