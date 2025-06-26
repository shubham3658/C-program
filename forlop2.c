#include<stdio.h>
int main()
{
    int i,n,sum=0;
    printf("enter a number");
    scanf("%d",&n);
    i=1;
    while(i <=n)
    {
    sum=sum+i;
    i++;
    }
    printf("sum of %d numbers is:%d",n,sum);

    return 0;

}
