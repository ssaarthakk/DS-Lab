#include <stdio.h>
int main()
{
    int r1, c1, r2, c2;
    printf("Enter the number of rows and columns\n");
    scanf("%d%d", &r1, &c1);
    scanf("%d%d", &r2, &c2);
    int a[r1][c1], b[r2][c2], i, j;
    if (c1 == r2)
    {
        int c[r1][c2], k;

        for (i = 0; i < r1; i++)
        {
            for (j = 0; j < c1; j++)
            {
                scanf("%d", &a[i][j]);
            }
        }
        for (i = 0; i < r2; i++)
        {
            for (j = 0; j < c2; j++)
            {
                scanf("%d", &b[i][j]);
            }
        }

        for (i = 0; i < r1; i++)
        {
            for (j = 0; j < c1; j++)
            {
                c[i][j] = 0;
                for (k = 0; k < c1; k++)
                {
                    c[i][j] += a[i][k] * b[k][j];
                }
            }
        }

        for (i = 0; i < r1; i++)
        {
            for (j = 0; j < c2; j++)
            {
                printf("%d ", c[i][j]);
            }
            printf("\n");
        }
    }
    else
        printf("Matrix multiplication not possible");
    return 0;
}