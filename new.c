#include <stdio.h>

#define MAX 100

void inputArray(int arr[], int *n) {
    int i;
    printf("Enter the number of elements: ");
    scanf("%d", n);
    printf("Enter %d elements:\n", *n);
    for (i = 0; i < *n; i++) {
        scanf("%d", &arr[i]);
    }
}

void displayArray(int arr[], int n) {
    int i;
    printf("Array elements are: ");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

void findMaximum(int arr[], int n) {
    int i, max = arr[0];
    for (i = 1; i < n; i++) {
        if (arr[i] > max)
            max = arr[i];
    }
    printf("Maximum element is: %d\n", max);
}

void findMinimum(int arr[], int n) {
    int i, min = arr[0];
    for (i = 1; i < n; i++) {
        if (arr[i] < min)
            min = arr[i];
    }
    printf("Minimum element is: %d\n", min);
}

void sumOfElements(int arr[], int n) {
    int i, sum = 0;
    for (i = 0; i < n; i++) {
        sum += arr[i];
    }
    printf("Sum of elements is: %d\n", sum);
}

void averageOfElements(int arr[], int n) {
    int i, sum = 0;
    float avg;
    for (i = 0; i < n; i++) {
        sum += arr[i];
    }
    avg = (float)sum / n;
    printf("Average of elements is: %.2f\n", avg);
}

void sortArray(int arr[], int n) {
    int i, j, temp;
    for (i = 0; i < n-1; i++) {
        for (j = i+1; j < n; j++) {
            if (arr[i] > arr[j]) {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    printf("Array sorted in ascending order.\n");
}

void linearSearch(int arr[], int n) {
    int i, key, found = 0;
    printf("Enter element to search: ");
    scanf("%d", &key);
    for (i = 0; i < n; i++) {
        if (arr[i] == key) {
            printf("Element %d found at position %d\n", key, i);
            found = 1;
            break;
        }
    }
    if (!found) {
        printf("Element %d not found in the array.\n", key);
    }
}

int main() {
    int arr[MAX], n = 0, choice;
    while (1) {
        printf("\n----- MENU -----\n");
        printf("1. Input Array Elements\n");
        printf("2. Display Array\n");
        printf("3. Find Maximum\n");
        printf("4. Find Minimum\n");
        printf("5. Sum of Elements\n");
        printf("6. Average of Elements\n");
        printf("7. Sort Array\n");
        printf("8. Linear Search\n");
        printf("9. Exit\n");
        printf("Enter your choice (1-9): ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                inputArray(arr, &n);
                break;
            case 2:
                if (n > 0)
                    displayArray(arr, n);
                else
                    printf("Array is empty. Please input elements first.\n");
                break;
            case 3:
                if (n > 0)
                    findMaximum(arr, n);
                else
                    printf("Array is empty.\n");
                break;
            case 4:
                if (n > 0)
                    findMinimum(arr, n);
                else
                    printf("Array is empty.\n");
                break;
            case 5:
                if (n > 0)
                    sumOfElements(arr, n);
                else
                    printf("Array is empty.\n");
                break;
            case 6:
                if (n > 0)
                    averageOfElements(arr, n);
                else
                    printf("Array is empty.\n");
                break;
            case 7:
                if (n > 0)
                    sortArray(arr, n);
                else
                    printf("Array is empty.\n");
                break;
            case 8:
                if (n > 0)
                    linearSearch(arr, n);
                else
                    printf("Array is empty.\n");
                break;
            case 9:
                printf("Exiting program.\n");
                return 0;
            default:
                printf("Invalid choice. Please try again.\n");
        }
    }
    return 0;
}