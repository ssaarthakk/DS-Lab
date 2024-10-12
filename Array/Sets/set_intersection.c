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

    for (i = 0; i < n2; i++){
        int common = 0;
        for (int j = 0; j < n1; j++)
        {
            if (b[i] == a[j])
            {
                common = 1;
                break;
            }
        }

        if (common == 1)
        {
            c[k] = b[i];
            k++;
        } else {
            continue;
        }
    }    

    printf("Intersection of two sets is:\n");

    for (i = 0; i < k; i++)
        printf("%d ", c[i]);

    return 0;
}