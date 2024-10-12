#include <stdio.h>
int main()
{
    int l, m;
    printf("Enter the size of array\n");
    scanf("%d%d", &l, &m);
    int a[l][m];
    int *point = a;
    printf("%p\n", point);
    printf("Enter the elements of array\n");
    for (int i = 0; i < l; i++)
    {
        for (int j = 0; j < m; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    printf("Enter elements you want to find address of\n");
    int ele;
    scanf("%d", &ele);
    for (int i = 0; i < l; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (a[i][j] == ele)
            {
                break;
            }
            else
            {
                point++;
            }
        }
    }
    printf("The address of element is %p\n", point);
    
    return 0;
}