#include<stdio.h>
int main()
{
    int num,temp,divisor=1;
    printf("enter a number:");
    scanf("%d",&num);
    temp=num;
    while(temp>=10)
    {
        temp/=10;
        divisor*=10;

    }
    while(divisor>0)
    {
        int digit=num/divisor;
        printf("%d",digit);
        num%=divisor;
        divisor/=10;

    }
    return 0;
}