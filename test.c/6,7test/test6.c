// 문제 6. 팩토리얼: factorial(int n)
#include <stdio.h>

int factorial(int n) {
    int result = 1;                     // 곱셈 시작 값(1)
    for (int i = 1; i <= n; i++) {
        result *= i;                    // result = result * i
    }
    return result;                      // 계산된 팩토리얼 반환
}

int main(void) {
    printf("%d\n", factorial(5)); // 120
    return 0;
}
