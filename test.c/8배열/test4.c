#include <stdio.h>

int main(void) {
    // [하는 일]
    // 0~9 숫자를 10개 입력받아 각 숫자가 몇 번 나왔는지 세어서 출력한다.

    int count[10] = {0}; // count[3] = 숫자 3이 나온 횟수
    int x;
    int i;

    printf("0~9 숫자 10개 입력: ");
    for (i = 0; i < 10; i++) {
        scanf("%d", &x);

        // 범위 밖 입력은 무시(실수 방지)
        if (x >= 0 && x <= 9) {
            count[x]++; // 숫자 x의 등장 횟수 1 증가
        }
    }

    for (i = 0; i < 10; i++) {
        printf("%d: %d회\n", i, count[i]);
    }

    return 0;
}
