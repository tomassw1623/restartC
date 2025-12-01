// 문제 1. 1부터 n까지의 합:sumtoN(int n)

#include <stdio.h>

int sumToN(int n) {
    int sum = 0;                    // 합계를 저장할 변수 (처음엔 0)
    for (int i = 1; i <= n; i++) {  // i를 1부터 n까지 반복
        sum += i;                   // sum = sum + i(숫자를 계속 더함)
    }
    return sum;                     // 마지막 합계를 돌려줌
}

int main(void) {
    int s = sumToN(10);             // 1~10까지의 합 계산
    printf("%d\n", s);              // 결과 출력
    return 0;
}
