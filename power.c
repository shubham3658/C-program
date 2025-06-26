
printf("result %d",result);
return 0;
    }
#include<stdio.h>
int main()
{
    int x,y,result=1,i;
    printf("enter a number");
    scanf("%d",&x);
    printf("enter a power");
    scanf("%d",&y);
    i=1;
    while(i<=y)
    {
        result=result*x;
i++;
    }