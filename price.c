#include<stdio.h>

int main()
{
    double tip,tax;
    double a,b;
    double base;
    int price;
    scanf("%lf",&base);
    scanf("%lf\n%lf",&a,&b);
    tip=base*(a/100);
    tax=base*(b/100);
    price=base+tip+tax;
    printf("%d",price);
    return 0;

}
