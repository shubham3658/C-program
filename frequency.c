#include <stdio.h>
int main()
{
    int a[100], i, n, key, cnt = 0;
    printf("Enter how much element you want:");
    scanf("%d", &n);
    printf("enter %d elemnts:\n", n);

    for (i = 0; i < n; i++){
    scanf("%d", a[i]);
    }

    
    printf("enter elements for occurency");
    scanf("%d", &key);

    for (i = 0; i < n; i++)
    {
        if (a[i] == key)
            cnt++;
    }

    if (cnt == 0)
        printf("not found");
    else
        printf("count is %d", cnt);
    return 0;
}