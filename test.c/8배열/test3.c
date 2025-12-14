#include <stdio.h>

int main(void) {
    // [하는 일]
    // 정수 5개를 입력받아 역순으로 출력한다.

    int arr[5];
    int i;

    printf("정수 5개 입력: ");
    for (i = 0; i < 5; i++) scanf("%d", &arr[i]);

    // 역순 출력 = 마지막 칸부터 첫 칸까지 출력
    for (i = 4; i >= 0; i--) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
