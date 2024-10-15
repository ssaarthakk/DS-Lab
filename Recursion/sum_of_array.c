#include <stdio.h>

int sumArray(int arr[], int size) {
    if (size <= 0) {
        return 0;
    }
    return arr[size - 1] + sumArray(arr, size - 1);
}

int main() {
    int c, n;

    printf("Enter number of elements in the array\n");
    scanf("%d", &n);

    printf("Enter %d elements\n", n);
    int arr[n];

    for (c = 0; c < n; c++)
        scanf("%d", &arr[c]);
    
    printf("Sum of array elements: %d\n", sumArray(arr, n));
    
    return 0;
}
