#include<stdio.h>
#include<math.h>
int main(){

    int i,j,a,b,c;
    float n,m,d;
    printf("enter a,b and c for the equation ax2 + bx + c:");
    scanf("%d %d %d",&a,&b,&c);
    d= (b*b)-(4*a*c);
    if (d==0)
    {
        m=-b/(2*a);
        n=m;
        printf("equal roots");
        printf("%f %f",m,n);
    }
    else if(d>0){
        m=(-b+sqrt(d))/(2*a);
         n=(-b-sqrt(d))/(2*a);
         printf("%f 5f",m,n);

    }
    else{
        printf("no real roots");
    }
    return 0;




}
