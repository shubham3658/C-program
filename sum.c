#include<stdio.h>
int main()
{
    int n,i;
    int evensum=0, oddsum=0;
    printf("enter the value of n:");
    scanf("%d",&n);
    for(i=1; i<=n; i++)
    {
        if (i%2==0)
        evensum +=i;
        else
        oddsum +=i;
    }
    printf("sum of even numbers from 1 to %d=%d\n",n,evensum);
    printf("sum of odd numbers from 1 to %d=%d\n",n,oddsum);

    return 0;
}