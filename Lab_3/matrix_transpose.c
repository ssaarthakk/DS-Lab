#include <stdio.h>
int main(){
    int r1, c1;
    printf("Enter the number of rows and columns\n");
    scanf("%d%d", &r1, &c1);
    int a[r1][c1], b[c1][r1];
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
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }
    
    for (i = 0; i < c1; i++)
    {
        for (j = 0; j < r1; j++)
        {
            b[i][j] = a[j][i];
        }
    }
    printf("The transpose of the matrix is\n");
    for (i = 0; i < c1; i++)
    {
        for (j = 0; j < r1; j++)
        {
            printf("%d ", b[i][j]);
        }
        printf("\n");
    }
}