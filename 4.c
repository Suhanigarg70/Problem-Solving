#include<stdio.h>
int main ()
{
    int i,j;
    int k=0;
    for(i=1;i<=4;i++)

{
    for(j=i;j<=2*i-1;j++)
    {

        printf("%d",j);
        k++;
    }
    printf("\n");

}
return 0;
}

