// 문제 1. 1부터 n까지의 합:sumtoN(int n)

#include <stdio.h>

int sumToN(int n) {
    int sum = 0;
    for (int i = 1; i <= n; i++) {
        sum += i;
    }
    return sum;
}

int main(void) {
    int s = sumToN(10);
    printf("%d\n", s);
    return 0;
}
