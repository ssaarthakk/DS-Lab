#include <stdio.h>

int fibonacci(int n) {
    if (n == 0) {
        return 0;
    } else if (n == 1) {
        return 1;
    }
    return fibonacci(n - 1) + fibonacci(n - 2);
}

int main() {
    int n;

    printf("Enter the position n (0-based index) for Fibonacci series: ");
    scanf("%d", &n);
    int result = fibonacci(n);
    printf("The %dth term of the Fibonacci series is %d\n", n, result);

    return 0;
}
