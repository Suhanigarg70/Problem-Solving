#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{

    int n,i,j,l,h,a[100][100],m;
    scanf("%d", &n);
    l=0;
    h=2*n-1;
    m=n;

    while(n>0)
    {
        for(i=l;i<h;i++)
        {
            for(j=l;j<h;j++)
        {
            if(i==l||i==h-1||j==l||j==h-1)
            {

            a[i][j]=n;

            }
        }
        }
        l++;
        h--;
        n--;

    }
    l=0;N
    h=2*m-1;
    for(i=l;i<h;i++)
    {
        for(j=l;j<h;j++)
        {
            printf("%d",a[i][j]);
        }
        printf("\n");
    }

    getch();

}
