#include<stdio.h>
int main()
{
    int n,rev=0,temp;
    printf("enter a number");
    scanf("%d",&n);
    temp=n;
    while(n>0)
    {
        int rem=n%10;
        rev=rev*10+rem;
        n=n/10;

    }
    if(rev==temp)
    printf("palindrome number");
    else
    printf("not palindrome number");
    return 0;
}