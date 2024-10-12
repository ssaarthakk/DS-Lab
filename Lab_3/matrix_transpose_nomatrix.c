#include <stdio.h>
int main()
{
    int r1, c1;
    printf("Enter the number of rows and columns\n");
    scanf("%d%d", &r1, &c1);
    int a[r1 > c1 ? r1 : c1][r1 > c1 ? r1 : c1];

    int i, j;
    printf("Enter the elements of the matrix\n");
    for (i = 0; i < r1; i++)
    {
        for (j = 0; j < c1; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    for (i = 0; i < r1; i++)
    {
        for (j = 0; j < c1; j++)
        {
            if (r1 != c1)
            {
                if (i < (r1 < c1 ? r1 : c1) && (2 * i) <= (i + j))
                {
                    int temp = a[i][j];
                    a[i][j] = a[j][i];
                    a[j][i] = temp;
                } else if (i >= (r1 < c1 ? r1 : c1))
                {
                    int temp = a[i][j];
                    a[i][j] = a[j][i];
                    a[j][i] = temp;
                }
            }
            else if ((2 * i) <= (i + j))
            {
                int temp = a[i][j];
                a[i][j] = a[j][i];
                a[j][i] = temp;
            }
        }
    }

    printf("The transpose of the matrix is\n");
    for (int i = 0; i < c1; i++)
    {
        for (int j = 0; j < r1; j++)
        {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }
}