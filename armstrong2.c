#include<stdio.h>
#include<math.h>
int main()
{
    int n,temp,cnt=0;
    float result=0;
    printf("enter a number");
    scanf("%d",&n);
    temp=n;
    while(n>0)
    {
        cnt++;
        n/=10;
    }
    n=temp;
    while (n>0)
    {
    int rem=n%10;
    result=result+pow(rem,cnt);
    n/=10;
}
if(result==temp)
printf(" is armstrong number");
else

printf(" is not armstrong number");
return 0;
}