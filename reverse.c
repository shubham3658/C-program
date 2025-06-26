#include<stdio.h>
int main()
{
    int n,reverse=0;
printf("enter a number");
scanf("%d",&n);
while(n>0)
{
    int rem=n%10;
    reverse=reverse*10+rem;
   n=n/10;

}
printf("reversed number=%d\n",reverse);
return 0;

}