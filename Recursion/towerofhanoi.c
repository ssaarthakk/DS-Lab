#include <stdio.h>

void towerOfHanoi(int n, char s, char d, char m) {
    if (n == 1) {
        printf("Move disk 1 from rod %c to rod %c\n", s, d);
        return;
    }
    towerOfHanoi(n - 1, s, m, d);
    printf("Move disk %d from rod %c to rod %c\n", n, s, d);
    towerOfHanoi(n - 1, m, d, s);
}

int main() {
    int n;
    printf("Enter the number of disks: ");
    scanf("%d", &n);

    printf("The sequence of moves involved in the Tower of Hanoi are:\n");
    towerOfHanoi(n, 'A', 'C', 'B');

    return 0;
}
