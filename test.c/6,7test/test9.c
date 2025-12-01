// 문제 9. 1~n까지 홀수의 합:
#include <stdio.h>

int sumOddToN(int n) {
    int sum = 0;
    for (int i = 1; i <= n; i++) {  // 1~n 반복
        if (i % 2 == 1) {           // 홀수인지 확인
            sum += i;               // 홀수면 합계에 더함
        }
    }
    return sum;
}

int main(void) {
    printf("%d\n", sumOddToN(10)); // 1+3+5+7+9 = 25
    return 0;
}
