#include <stdio.h>

int main(void) {
    // [하는 일]
    // 3x4 정수를 입력받고, 각 행(row)의 합을 출력한다.

    int a[3][4];
    int r, c;

    printf("3x4 정수 입력(총 12개):\n");
    for (r = 0; r < 3; r++) {
        for (c = 0; c < 4; c++) scanf("%d", &a[r][c]);
    }

    for (r = 0; r < 3; r++) {
        int rowSum = 0; // 행 합은 행마다 새로 0부터 시작해야 한다
        for (c = 0; c < 4; c++) rowSum += a[r][c];
        printf("%d번째 행 합=%d\n", r, rowSum);
    }

    return 0;
}
