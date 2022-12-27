#include<stdio.h>
#include<stdlib.h>

int main()
{
    char  s[] = "ABC";
    int i,j=0;
    for (i=0;i<3;i++)
    {
        while(j<i+1)
        {
           printf("%c",s[i]);
           j++;
        }
        printf("\n");
        j=0;
    }
    return 0;

}
