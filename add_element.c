
// frequency of the element occure in the array.//
// here we can use external file to get elemetns where we already declared elements//

#include <stdio.h>
#include <conio.h>

int main()
{
    int a[100], i, n, key, position;
    char data[100];
    FILE *fp; // this is file pointer //

    fp = fopen("element.txt", "r"); // here we used r bcz we want this file in read mode //

    printf("Enter how much element you want :");
    scanf("%d", &n);

    for (i = 0; i < n; i++)
    {
        fscanf(fp, "%d", &a[i]); // this line for get elemetn form file //
        printf("\t%d", a[i]);    // here we print the array //
    }

    printf("\nEnter position to for insert element :");
    scanf("%d", &position);

    printf("Enter new element :");
    scanf("%d", &key);

    for (i = n; i >= position; i--)
    {
        a[i] = a[i - 1];
    }

    a[position - 1] = key;

    printf("new arry is :");
    for (i = 0; i < n; i++)
        printf("\t%d\t", a[i]);
    return 0;
}