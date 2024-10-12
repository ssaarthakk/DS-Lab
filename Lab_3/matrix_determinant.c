#include <stdio.h>
int main()
{
    int r, c;
    printf("Enter rows and cloumns\n");
    scanf("%d%d", &r, &c);
    if (r != c)
    {
        printf("Determinant calculation is not possible\n");
        return 0;
    }

    float a[r][c];
    printf("Enter elements of array\n");
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            scanf("%f", &a[i][j]);
        }
    }

    int first = a[0][0];
    for (int i = 0; i < c; i++)
    {
        a[0][i] = (a[0][i] / first);
    }

    // for (int i = 1; i < r; i++)
    // {
    //     for (int j = 0; j < c; j++)
    //     {
    //         a[i][j] = a[i][j] - ((a[j][i]) * (a[0][j]));
    //     }
    // }

        for (int i = 1; i < r; i++)
        {
            for (int j = 0; j < c; j++)
            {
                a[i][j] = a[i][j] - ((a[i][j]) * (a[0][j]));
            }
        }
    // for (int k = 0; k < c - 1; k++)
    // {
    // }

    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            printf("%f ", a[i][j]);
        }
        printf("\n");
    }

    return 0;
}