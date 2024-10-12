#include <stdio.h>
int main()
{
    int n;
    printf("Enter size of array\n");
    scanf("%d", &n);
    int arr[n];
    printf("Enter Array Elements\n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    
    for (int i = 0; i < n; i++)
    {
        int ele = arr[i];
        int count = 0;
        for (int i = 0; i < n; i++)
        {
            if (arr[i] == ele)
            {
                count++;
            }
        }
        if (count > 1)
        {
            printf("%d is repeated %d times\n", arr[i], count);
        }
        else
        {
            printf("%d is unique\n", arr[i]);
        }
    }
    return 0;
}