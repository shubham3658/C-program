#include <stdio.h>
int main()
{
    int a[100], n, i, j, key;
    printf("how many elements you want to enter");
    scanf("%d", &n);
    printf("enter %d elements:\n", n);

    for (i = 0; i < n; i++)
    {
        scanf("%d\n", &a[i]);
    }

    printf("Array is:");
    for (i = 0; i < n; i++)
        printf("%d", a[i]);

    printf("\nEnter which number want to delete:");
    scanf("%d", &key);

    for (i = 0; i < n; i++)
    {
        if (a[i] == key)
        {
            for (j = i; j < n - 1; j++)
                a[j] = a[j + 1];
            n--;
            break;
        }
    }
    for (i = 0; i < n; i++)
        printf("%d", a[i]);
    return 0;
}