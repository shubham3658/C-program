#include<stdio.h>
int main()
{
    int n;
    printf("enter how many times you want to print hello:");
    scanf("%d",&n);
    for(int i=0; i<n; i++)
    {
        printf("hello\n");

    }
    return 0;
}