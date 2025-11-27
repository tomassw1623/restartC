// 문제 7. 자리수 합: sumDigits(int n)
#include <stdio.h>

int sumDigits(int n) {
    int sum = 0;
    while (n > 0) {
        sum += n % 10;  // 마지막 자리 더하기
        n /= 10;        // 한 자리 줄이기
    }
    return sum;
}

int main(void) {
    printf("%d\n", sumDigits(123)); // 1+2+3=6
    printf("%d\n", sumDigits(4567)); // 4+5+6+7=22
    return 0;
}
