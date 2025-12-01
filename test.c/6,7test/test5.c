// 문제 5. 소수 판별: isPrime(int n)
#include <stdio.h>

int isPrime(int n) {
    if (n <= 1) return 0;                   // 1 이하의 숫자는 소수가 아님

    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0)                     // 나누어 떨어지면 소수가 아님
            return 0;
    }
    return 1;                               // 끝까지 안 나누어지면 소수임
}

int main(void) {
    printf("%d\n", isPrime(7));  // 1
    printf("%d\n", isPrime(10)); // 0
    return 0;
}
