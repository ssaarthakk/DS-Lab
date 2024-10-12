#include <stdio.h>
int main()
{
    int r, c, m, n;
    printf("Enter the number of rows and columns\n");
    scanf("%d%d", &r, &c);
    scanf("%d%d", &m, &n);

    int a[r][c], b[m][n], k[m][n], j, i;

    if (r == m && n == c)
    {
        for (i = 0; i < r; i++)
        {
            for (j = 0; j < c; j++)
            {
                scanf("%d", &a[i][j]);
            }
        }
        for (i = 0; i < m; i++)
        {
            for (j = 0; j < n; j++)
            {
                scanf("%d", &b[i][j]);
            }
        }
        for (i = 0; i < r; i++)
        {
            for (j = 0; j < c; j++)
            {
                k[i][j] = a[i][j] - b[i][j];
            }
        }

        for (i = 0; i < r; i++)
        {
            for (j = 0; j < c; j++)
            {
                printf("%d ", k[i][j]);
            }
            printf("\n");
        }
    }
    else
        printf("Matrix addition not possible");
    return 0;
}