#include<stdio.h>
int main ()
{
    int i,j;
    i=20;
    j=1;
    while(i<24)
    {
        while (j<25)
        {
            printf("%d ",j);
            j++;
            if(j%6==1)
                printf("\n");

        }
        i++;

    }
    return 0;
}
