#include <stdio.h>

int factorial(int n)
{
    if (n == 1)
    {
        return 1;
    }
    else
    {
        return n * factorial(n - 1);
    }
}
int main()
{
    int a;
    printf("Enter the number to find factorial");
    scanf("%d\n", &a);
    printf("%d\n", factorial(a));
    return 0;
}