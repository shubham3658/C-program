#include<stdio.h>
#include<math.h>
int main()
{
    int num,temp,remainder,sum=0,digits=0;
    printf("enter a number:");
    scanf("%d",&num);
    temp=num;
    while(temp !=0)
    {
        temp/=10;
        digits++;
    }
    temp=num;
    while(temp!=0)
    {
        remainder=temp%10;
        sum+=pow(remainder,digits);
        temp/=10;
    }
    if(sum==sum)
    {
        printf("%d is an armstrong number.\n",num);

    }
    else
    {
        printf("%d is not an armstrong number.\n",num);

    }
    return 0;
}