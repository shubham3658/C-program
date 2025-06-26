#include<stdio.h>
int main()
{
    int num,reverse=0;
printf("enter a number");
scanf("%d",&num);
while(num !=0)
{
    int digit=num%10;
    reverse=reverse*10+digit;
   num=num/10;

}
printf("reversed number=%d\n",reverse);
return 0;

}