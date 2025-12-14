#include <stdio.h>

int main(void) {
    // [하는 일]
    // 3x3 정수를 입력받아 전체 합을 출력한다.

    int a[3][3];  // 3행 3열(칸 9개)
    int r, c;
    int sum = 0;

    printf("3x3 정수 입력(총 9개):\n");
    for (r = 0; r < 3; r++) {
        for (c = 0; c < 3; c++) {
            scanf("%d", &a[r][c]); // (r,c) 칸의 주소에 입력 저장
            sum += a[r][c];
        }
    }

    printf("총합=%d\n", sum);
    return 0;
}
