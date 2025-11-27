// 문제 6. 팩토리얼: factorial(int n)
#include <stdio.h>

int factorial(int n) {
    int result = 1;
    for (int i = 1; i <= n; i++) {
        result *= i;
    }
    return result;
}

int main(void) {
    printf("%d\n", factorial(5)); // 120
    return 0;
}
