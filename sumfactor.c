#include<stdio.h>
int main()
{
    int num,i,count=0,sum=0;
    printf("enter a number:");
    scanf("%d",&num);

    printf("factor of %d are:",num);
    for(i=1; i<=num; i++)
    {
    if(num% i==0)
    {
        
        printf("%d",i);
        count++;
        sum +=i;
    }
    }
    printf("\n total number of factor: %\n",count);
    printf("sum of factor:%d\n",sum);

    return 0;
}