#include<stdio.h>
int main()
{
int i,sum,n;
printf("enter a numnber");
scanf("%d",&n);
for (i=1; i<=n/2; i++)
{
    if(n%i==0)
    sum +=i;
}
if (sum==n)
printf("perfect number");
else
printf("not perfect number");
return 0;
}