#include<stdio.h>
int main()
{
    int cnt=0,n;
    printf("enter a numbner");
    scanf("%d",&n);
    while(n>0)
    {
        cnt++;
        n=n/10;
    }
    printf("cnt of digits is %d",cnt);
    return 0;
}