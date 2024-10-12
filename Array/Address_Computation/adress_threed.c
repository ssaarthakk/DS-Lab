#include <stdio.h>
int main()
{
    int l, m, n;
    printf("Enter the size of array\n");
    scanf("%d %d %d", &l, &m), &n;
    int *point;
    int a[l][m][n];
    point = a;
    printf("%p\n", point);
    printf("Enter the elements of array\n");
    for (int i = 0; i < l; i++)
    {
        for (int j = 0; j < m; j++)
        {
            for (int k = 0; k < n; k++)
            {
                scanf("%d", &a[i][j]);
            }
        }
    }
    printf("Enter elements you want to find address of\n");
    int ele;
    scanf("%d", &ele);
    for (int i = 0; i < l; i++)
    {
        for (int j = 0; j < m; j++)
        {
            for (int k = 0; k < n; k++)
            {
                if (a[i][j][k] == ele)
                {
                    break;
                }
                else
                {
                    point++;
                }
            }
        }
    }
    printf("The address of element is %p\n", point);
}