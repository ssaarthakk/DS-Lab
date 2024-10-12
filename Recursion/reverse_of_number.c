#include <stdio.h>

int reverseNumber(int num, int rev) {
    if (num == 0) {
        return rev;
    }
    return reverseNumber(num / 10, rev * 10 + num % 10);
}

int main() {
    int number;
    printf("Enter an integer: ");
    scanf("%d", &number);
    int isNegative = number < 0;
    if (isNegative) {
        number = -number;
    }
    int reversedNumber = reverseNumber(number, 0);

    if (isNegative) {
        printf("The reverse of %d is -%d\n", -number, reversedNumber);
    } else {
        printf("The reverse of %d is %d\n", number, reversedNumber);
    }

    return 0;
}
