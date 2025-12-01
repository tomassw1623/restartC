// 문제2. 2단부터 9단까지 구구단 전체: gugudan(void)
#include <stdio.h>

void gugudan(void) {
    for (int dan = 2; dan <= 9; dan++) {
        printf("=== %d단 ===\n", dan);
        // i는 1~9까지 곱해지는 숫자
        for (int i = 1; i <= 9; i++) {
            printf("%d x %d = %d\n", dan, i, dan * i);
        }
        printf("\n"); 
    }
}

int main(void) {
    gugudan();
    return 0;
}
