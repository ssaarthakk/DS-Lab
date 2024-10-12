#include <stdio.h>
int main()
{
    int i, n, r, y = 0, g;
    printf("Enter total no of array elements:");
    scanf("%d", &n);
    int a[n];
    printf("Enter the array elements:");
    for (i = 0; i < n - 1; i++)
    {
        scanf("%d", &a[i]);
        y = y + a[i];
    }
    r = (n * (n + 1)) / 2;
    g = r - y;
    printf("missing number:");
    printf("%d", g);
    return 0;
}