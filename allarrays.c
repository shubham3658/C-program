#include <stdio.h>
int main()
{
    int a[100], n, i, sum = 0, choice, max, min;
    printf("how many elements you want to enter");
    scanf("%d", &n);

    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);

    printf("1.display array\n");
    printf("2.sum of elements\n");
    printf("3.maximum elements\n");
    printf("4.minimum elements\n");
    
    printf("enter choice:");
    scanf("%d", &choice);

    switch (choice)
    {
    case 1:
        for (i = 0; i < n; i++)
            printf("\t%d", a[i]);
        break;

    case 2:
        for (i = 0; i < n; i++)
            sum = sum + a[i];
        printf("sum of array is :%d", sum);
        break;

    case 3:
        max = a[0];
        for (i = 0; i < n; i++)
            if (max < a[i])
                max = a[i];
        printf("maximum elements is :%d", max);
        break;

    case 4:
        min = a[0];
        for (i = 0; i < n; i++)
            if (min > a[i])
                min = a[i];
        printf("minimum elements is :%d", min);
        break;

    default:
        printf("wrong option");
    }
    return 0;
}
