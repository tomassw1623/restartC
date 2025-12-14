#include <stdio.h>

int main(void) {
    // [하는 일]
    // 길이 5짜리 배열 두 개를 입력받고, 같은 인덱스끼리 더한 결과 배열을 만든다.

    int a[5], b[5], c[5];
    int i;

    printf("a 5개 입력: ");
    for (i = 0; i < 5; i++) scanf("%d", &a[i]);

    printf("b 5개 입력: ");
    for (i = 0; i < 5; i++) scanf("%d", &b[i]);

    // 같은 위치(인덱스)끼리 더하면 "요소별 합"
    for (i = 0; i < 5; i++) c[i] = a[i] + b[i];

    printf("c 결과: ");
    for (i = 0; i < 5; i++) printf("%d ", c[i]);
    printf("\n");

    return 0;
}
