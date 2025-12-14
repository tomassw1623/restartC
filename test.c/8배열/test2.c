#include <stdio.h>

int main(void) {
    // [하는 일]
    // 정수 6개 중 최댓값과 최솟값을 찾아 출력한다.

    int arr[6];
    int i;

    printf("정수 6개 입력: ");
    for (i = 0; i < 6; i++) {
        scanf("%d", &arr[i]);
    }

    // 첫 값을 기준으로 잡는 이유:
    // max=0 같은 임의의 값으로 시작하면 모든 입력이 음수일 때 틀릴 수 있다.
    int min = arr[0];
    int max = arr[0];

    for (i = 1; i < 6; i++) {
        if (arr[i] < min) min = arr[i];
        if (arr[i] > max) max = arr[i];
    }

    printf("최솟값=%d, 최댓값=%d\n", min, max);
    return 0;
}
