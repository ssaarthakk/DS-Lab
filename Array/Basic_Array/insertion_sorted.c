#include <stdio.h>

int main()
{
    int n, value;

    printf("Enter number of elements in the array\n");
    scanf("%d", &n);

    printf("Enter %d elements\n", n);
    int array[n];

    for (int c = 0; c < n; c++)
        scanf("%d", &array[c]);

    printf("Please enter the value\n");
    scanf("%d", &value);

    int position;
    for (int c = 0; c < n; c++)
    {
        if (array[c] > value)
        {
            position = c + 1;
            break;
        }
    }
    for (int c = n - 1; c >= position - 1; c--)
        array[c + 1] = array[c];

    array[position - 1] = value;

    printf("Resultant array is\n");

    for (int c = 0; c <= n; c++)
        printf("%d\n", array[c]);

    return 0;
}