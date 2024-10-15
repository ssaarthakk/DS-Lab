#include <stdio.h>

int main()
{
    int position, c, n, value;

    printf("Enter number of elements in the array\n");
    scanf("%d", &n);

    printf("Enter %d elements\n", n);
    int array[n];

    for (c = 0; c < n; c++)
        scanf("%d", &array[c]);

    printf("Please enter the value to delete\n");
    scanf("%d", &value);

    for (int i = 0; i < n; i++)
    {
        if (array[i] == value)
        {
            for (int j = i; j < n - 1; j++)
            {
                array[j] = array[j + 1];
            }
            n--;
            break;
        }
    }

    printf("Resultant array is\n");

    for (c = 0; c <= n; c++)
        printf("%d\n", array[c]);

    return 0;
}