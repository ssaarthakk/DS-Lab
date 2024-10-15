#include <stdio.h>

int binSearch(int left, int right, int *arr, int target){
    int mid = left + (right - left)/2;
    if (left > right)
    {
        return -1;
    } else if (*(arr + mid) == target)
    {
        return 1;
    } else {
        if (*(arr + mid) < target) {
            left = mid + 1;
        }
        else {
            right = mid - 1;
        }
        binSearch(left, right, arr, target);
    }
}


int main(){
    int size;

    printf("Enter number of elements in the array\n");
    scanf("%d", &size);

    printf("Enter %d elements\n", size);
    int arr[size];

    for (int c = 0; c < size; c++)
        scanf("%d", &arr[c]);

    int target;
    printf("Enter the element to find\n");
    scanf("%d", &target);
    if (binSearch(0, size-1, arr, target) == 1)
    {
        printf("Element Found\n");
    } else {
        printf("Element not found\n");
    }
}