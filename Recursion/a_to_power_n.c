#include <stdio.h>

int power(int base, int exponent) {
    if (exponent == 0) {
        return 1;
    }
    else if (exponent < 0) {
        return 1 / power(base, -exponent);
    }
    else {
        return base * power(base, exponent - 1);
    }
}

int main() {
    int base;
    int exponent;

    printf("Enter base: ");
    scanf("%d", &base);
    printf("Enter exponent: ");
    scanf("%d", &exponent);

    int result = power(base, exponent);
    
    printf("%d raised to the power of %d is %d\n", base, exponent, result);

    return 0;
}
