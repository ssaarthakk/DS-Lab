#include <stdio.h>
int main()
{
    int n1, n2, n3, temp;
    printf("Enter the size of first array:\n");
    scanf("%d", &n1);
    int a[n1];
    printf("Enter the elements:\n");
    int i, j;
    for (i = 0; i < n1; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("Enter the size of second array:\n");
    scanf("%d", &n2);
    int b[n2];
    printf("Enter the elements:\n");
    for (i = 0; i < n2; i++)
    {
        scanf("%d", &b[i]);
    }
    n3 = n1 + n2;
    int c[n3];
    int k = 0;

    // Adding Elements of a which are not present in b and are not common
    for (i = 0; i < n1; i++){
        int common = 0;
        for (int j = 0; j < n2; j++)
        {
            if (a[i] == b[j])
            {
                common = 1;
                break;
            }
        }

        if (common == 0)
        {
            c[k] = a[i];
            k++;
        } else {
            continue;
        }
    }    

    printf("Difference of two sets is:\n");

    for (i = 0; i < k; i++)
        printf("%d ", c[i]);

    return 0;
}