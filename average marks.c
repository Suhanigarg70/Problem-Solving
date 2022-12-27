#include<stdio.h>
int main()
{
    float arr[100],i,sum,n;
    float avg ;
    sum=0;
    printf("enter no of students ");
    scanf("%f",&n);
    for (i=0;i<n;i++)
    {
        scanf("%f",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        sum+=arr[i];
    }
    avg=sum/n;
    printf("Total marks of the students=%f\n",sum);
    printf("average marks of the students=%f",avg);
    return 0;
}
