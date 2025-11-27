// 문제 8. 별 계단 형태 출력: printStars(int n)
#include <stdio.h>

void printStars(int n) {
    for (int i = 1; i <= n; i++) {
        for (int j = 0; j < i; j++) {
            printf("★");
        }
        printf("\n");
    }
}

int main(void) {
    printStars(3);
    return 0;
}
