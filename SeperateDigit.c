#include<stdio.h>
int main()
{
    int rem,n;
    printf("enter a numbner");
    scanf("%d",&n);
    while(n>0)
    {
    int rem=n%10;
    
    printf("%d        ",rem);
    n=n/10;
    }
    return 0;
}