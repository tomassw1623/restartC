#include <stdio.h>

int main(void) {
    // [하는 일]
    // 입력 5개를 받아 누적합(prefix sum)을 만든다.
    // 예) 1 2 3 4 5 -> 1 3 6 10 15

    int arr[5];
    int prefix[5];
    int sum = 0;

    printf("정수 5개 입력: ");
    for (int i = 0; i < 5; i++) {
        scanf("%d", &arr[i]);
    }

    for (int i = 0; i < 5; i++) {
        sum += arr[i];     // 지금까지 합을 계속 쌓음
        prefix[i] = sum;   // 그 결과를 prefix에 저장
    }

    for (int i = 0; i < 5; i++) {
        printf("%d ", prefix[i]);
    }
    printf("\n");

    return 0;
}
